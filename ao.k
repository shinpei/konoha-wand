#!/usr/local/bin/konoha

using math.*;

WIDTH = 256;
HEIGHT = 256;

NSUBSAMPLES = 2;
NAO_SAMPLES = 8;

class Vec {
	double x;
	double y;
	double z;

	Vec(double x=0.0, double y=0.0, double z=0.0) {
		_x = x;
		_y = y;
		_z = z;
	}
}

void normalize (Vec v) {
	double q = dot(v, v);
	double length = Math.sqrt(q);
	if (length > 0.00000000001 /* 1e-10 */) {
		v.x = v.x / length;
		v.y = v.y / length;
		v.z = v.z / length;
	}
}  

double dot(Vec v0, Vec v1) {
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z;
}


void cross(Vec v0, Vec v1, Vec v2) {
	v2.x = v0.y * v1.z - v0.z * v1.y;
	v2.y = v0.z * v1.x - v0.x * v1.z;
	v2.z = v0.x * v1.y - v0.y * v1.x;
}


class RayIntersection {
	Vec rayPosition;
	Vec rayDirection;
	Vec hitPosition;
	Vec normal;
	Boolean    isHit;
	double distance;

	RayIntersection () {
		rayPosition = new Vec();
		rayDirection = new Vec();
		hitPosition = new Vec();
		normal = new Vec();
	}
}

class Sphere {
	Vec center;
	double radius;
}

void interSectsSphere(Sphere! s, RayIntersection isect)
{
	Vec rs = new Vec();

	rs.x = isect.rayPosition.x - s.center.x;
	rs.y = isect.rayPosition.y - s.center.y;	
	rs.z = isect.rayPosition.z - s.center.z;

	double b = dot(rs, isect.rayDirection);
	double c = dot(rs, rs) - s.radius * s.radius;
	double d = b * b - c;
	
	if (d > 0.0)
	{
		double t = -b - Math.sqrt(d);
		if ((t > 0.0) && (t < isect.distance))
		{
			isect.distance = t;
			isect.isHit = true;
			Vec pv = isect.rayPosition;
			Vec dv = isect.rayDirection;
			Vec hv = isect.hitPosition;
			Vec nv = isect.normal;
			Vec cv = s.center;

			hv.x = pv.x + dv.x * t;
			hv.y = pv.y + dv.y * t;
			hv.z = pv.z + dv.z * t;
			nv.x = hv.x - cv.x;
			nv.y = hv.y - cv.y;
			nv.z = hv.z - cv.z;
			normalize(isect.normal);
		}
	}
}

class Plane {
	Vec position;
	Vec normal;
	Plane () {
		position = new Vec();
		normal = new Vec();
	}
}

void interSectsPlane(Plane plane, RayIntersection isect)
{
	double d = -1.0 *dot(plane.position, plane.normal);
	double v = dot(isect.rayDirection, plane.normal);
	if (v > 0.0000000000000001 || v < -0.00000000000000001) {
		double t = -1.0 * (dot(isect.rayPosition, plane.normal) + d) / v;
		if ((t > 0.0) && (t < isect.distance)) {
			Vec hv = isect.hitPosition;
			Vec nv = isect.normal;
			Vec pv = isect.rayPosition;
			Vec dv = isect.rayDirection;

			isect.distance = t;
			isect.isHit = true;
			hv.x = pv.x + dv.x * t;
			hv.y = pv.y + dv.y * t;
			hv.z = pv.z + dv.z * t;

			nv.x = plane.normal.x;
			nv.y = plane.normal.y;
			nv.z = plane.normal.z;

		}
	}
}

Sphere[] spheres;
Plane plane;

void getOrthoBasis (Vec normal, Vec[] orthoBasis)
{
	orthoBasis[0] = new Vec();
	orthoBasis[1] = new Vec();
	orthoBasis[2] = new Vec();
	Vec o0 = orthoBasis[0];
	Vec o1 = orthoBasis[1];
	Vec o2 = orthoBasis[2];

	o2.x = normal.x;
	o2.y = normal.y;
	o2.z = normal.z;

	if ((normal.y < 0.6) && (normal.y > -0.6)) {
		o1.y = 1.0;
	} else if ((normal.z < 0.6) && (normal.z > -0.6)) {
		o1.z = 1.0;
	}else {
		o1.x = 1.0;
	}
	cross(o1, o2, o0);
	normalize(o0);
	cross(o2, o0, o1);
	normalize(o1);
}


void getAmbientOcclusion(RayIntersection isect, Vec ambientOcclusion)
{
	int i, j;
	int ntheta = NAO_SAMPLES;
	int nphi = NAO_SAMPLES;
	double eps = 0.0001;

	RayIntersection! occlsect = new RayIntersection();
	Vec opv = occlsect.rayPosition;
	Vec ihv = isect.hitPosition;
	Vec inv = isect.normal;
	opv.x = ihv.x + eps * inv.x;
	opv.y = ihv.y + eps * inv.y;
	opv.z = ihv.z + eps * inv.z;

	Vec[] basis = new Vec[3];

	getOrthoBasis(inv, basis);

	int hitCount = 0;
	for (j = 0; j < ntheta; j++) {
		for (i = 0; i < nphi; i++) {
			double theta;
			theta = Math.sqrt(Float.random());
			double phi = 2.0 * Math.PI * Float.random();
			double x = Math.cos(phi) * theta;
			double y = Math.sin(phi) * theta;
			double z = Math.sqrt(1.0 - theta * theta);
			Vec odv = occlsect.rayDirection;
			odv.x = x * basis[0].x + y * basis[1].x + z * basis[2].x;
			odv.y = x * basis[0].y + y * basis[1].y + z * basis[2].y;
			odv.z = x * basis[0].z + y * basis[1].z + z * basis[2].z;

			occlsect.distance = 100000000000;
			occlsect.isHit = false;  
			interSectsSphere(spheres[0], occlsect);
			interSectsSphere(spheres[1], occlsect);
			interSectsSphere(spheres[2], occlsect);
			interSectsPlane(plane,occlsect);

			if (occlsect.isHit == true) {
				hitCount++;
			}
		} 
	}
	double occlusionRatio = (double)(ntheta * nphi - hitCount) / (double)(ntheta * nphi);
	ambientOcclusion.x = occlusionRatio;
	ambientOcclusion.y = occlusionRatio;
	ambientOcclusion.z = occlusionRatio;
}

int clamp(double value)
{
	int i = (value * 255.5);
	if (i > 255) i = 255;
	else if (i < 0) i = 0;
	return i;
}

void render(int[] byteImage, int width, int height, int numberOfSubSamples)
{
	Float[] fimg = new Float[width * height * 3];
	RayIntersection isect = new RayIntersection();
	int x,y,v,u;

	Vec pv = isect.rayPosition;
	Vec dv = isect.rayDirection;
	Vec hv = isect.hitPosition;
	Vec nv = isect.normal;

	double fsample = (double)numberOfSubSamples;
	double dw = width / 2.0;
	double dh = height / 2.0;
	
	for (y = 0; y < height; y++){
		for (x = 0;x < width; x++) {
			for (v = 0; v < numberOfSubSamples; v++){
				for (u = 0; u < numberOfSubSamples; u++) {
//					dv.x = (x + (u / fsample) - dw) / dw;
//					dv.y = -(y + (v / fsample) - dh) / dh;
//					dv.z = -1.0;
					isect.rayDirection.x = (x + (u / fsample) - dw) / dw;
					isect.rayDirection.y = -(y + (v /fsample) -dh) /dh;
					isect.rayDirection.z = -1.0;
					isect.distance = 1000000000;
					isect.isHit = false;
					normalize(isect.rayDirection);
					interSectsSphere(spheres[0], isect);
					interSectsSphere(spheres[1], isect);
					interSectsSphere(spheres[2], isect);
					interSectsPlane(plane, isect);
		  
					if (isect.isHit == true) {
						Vec ambientOcclusion = new Vec();
						getAmbientOcclusion(isect, ambientOcclusion);
						int p = 3 * (y * width + x);
						fimg[p] = fimg[p] + ambientOcclusion.x;
						fimg[p + 1] = fimg[p + 1] + ambientOcclusion.y;
						fimg[p + 2] = fimg[p + 2] + ambientOcclusion.z;
					}
				}
			}
			int num = numberOfSubSamples * numberOfSubSamples;
			double dnum = (double)num;
			int p1 = 3 * (y * width + x);
			fimg[p1] = fimg[p1] / dnum;
			fimg[p1+1] = fimg[p1 + 1] / dnum;
			fimg[p1+2] = fimg[p1+2] / dnum;
			
			byteImage[p1] = clamp(fimg[p1]);
			byteImage[p1+1] = clamp(fimg[p1+1]);
			byteImage[p1+2] = clamp(fimg[p1+2]);
		}
	}
}

void setupScene()
{
	spheres[0] = new Sphere();
	spheres[0].center = new Vec(-2.0, 0.0, -3.5);
	spheres[0].radius = 0.5;
  
<<<<<<< HEAD:ao.k
	spheres[1] = new Sphere();
	spheres[1].center = new Vec(-0.5, 0.0, -3.0);
	spheres[1].radius = 0.5;  
  
	spheres[2] = new Sphere();
	spheres[2].center = new Vec(1.0, 0.0, -2.2);
	spheres[2].radius = 0.5;
=======
  spheres[1] = new Sphere();
  ((Sphere)spheres[1]).center = new Vec();
  ((Sphere)spheres[1]).center.x = -0.5;
  ((Sphere)spheres[1]).center.y = 0.0;
  ((Sphere)spheres[1]).center.z = -3.0;
  ((Sphere)spheres[1]).radius = 0.5;  

  spheres[2] = new Sphere(); 
  ((Sphere)spheres[2]).center = new Vec();
  ((Sphere)spheres[2]).center.x = 1.0;
  ((Sphere)spheres[2]).center.y = 0.0;
  ((Sphere)spheres[2]).center.z = -2.2;
  ((Sphere)spheres[2]).radius = 0.5;

  plane.position = new Vec();
  plane.position.x = 0.0;
  plane.position.y = -0.5;
  plane.position.z = 0.0;
>>>>>>> f1ca45eaf507a54899f8011380397b94b7f808cd:ao.k

	plane.position = new Vec(0.0, -0.5, 0.0);
	plane.normal = new Vec(0.0, 1.0, 0.0);
}

<<<<<<< HEAD:ao.k
void main (String[] args) {
	int[] img = new int[WIDTH * HEIGHT * 3];
	spheres = new Sphere[3];
	plane = new Plane();

	int i;
	setupScene();
	render(img, WIDTH, HEIGHT, NSUBSAMPLES);
	OutputStream out = new OutputStream("ao.ppm", "wb");
	out << "P6" << EOL;
	out << WIDTH << " " << HEIGHT << EOL;
	out << "255" << EOL;
	for (i = 0; i<|img| ; i++) {
		out.putChar(img[i]);
	}
	out.close();
=======
void run()
{
  int[] img = new int[WIDTH * HEIGHT * 3];
  int i;
  setupScene();
  render(img, WIDTH, HEIGHT, NSUBSAMPLES);
  
  OutputStream out = new OutputStream("test2.ppm", "wb");
  out << "P6" << EOL;
  out << WIDTH << " " << HEIGHT << EOL;
  out << "255" << EOL;
  for (i = 0; i<|img| ; i++) {
	out.putChar(img[i]);
  }
  out.close();
  
>>>>>>> f1ca45eaf507a54899f8011380397b94b7f808cd:ao.k
}



