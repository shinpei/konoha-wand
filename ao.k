#!/usr/local/bin/konoha

using math.*;
using aobench.*;

WIDTH = 256
HEIGHT = 256

NSUBSAMPLES = 2
NAO_SAMPLES = 8

class Vec {
  double x;
  double y;
  double z;
  
  /*
	Vec(double x, double y, double z) {
    _x = x; _y = y; _z = z;
  }
  */
}
  
  double dot(Vec! v0, Vec! v1) {
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z;
  }


void cross(Vec! v0, Vec! v1, Vec! v2) {
	v2.x = v0.y * v1.z - v0.z * v1.y;
	v2.y = v0.z * v1.x - v0.x * v1.z;
	v2.z = v0.x * v1.y - v0.y * v1.x;
}

void normalize(Vec! v1) {
  double q = dot(v1, v1);
  double length = Math.sqrt(q);
  if (length > 0.0000000001) //1e-10
	{
	  v1.x = v1.x / length;
	  v1.y = v1.y / length;
	  v1.z = v1.z / length;
	}
}



class RayIntersection {
  Vec! rayPosition;
  Vec! rayDirection;
  double distance;
  Vec!    hitPosition;
  Vec!    normal;
  Boolean    isHit;
}

class Sphere {
  Vec! center;
  double radius;

  void printing()
  {
	print _center, radius;
  }
}

void interSectsSphere(Sphere! s, RayIntersection! isect)
{
	Vec! rs = new Vec();
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

			isect.hitPosition.x = isect.rayPosition.x + isect.rayDirection.x * t;
			isect.hitPosition.y = isect.rayPosition.y + isect.rayDirection.y * t;			
			isect.hitPosition.z = isect.rayPosition.z + isect.rayDirection.z * t;

			isect.normal.x = isect.hitPosition.x - s.center.x;
			isect.normal.y = isect.hitPosition.y - s.center.y;
			isect.normal.z = isect.hitPosition.z - s.center.z;
			
			normalize(isect.normal);
		  }
	  }
}



class Plane {
  Vec! position;
  Vec! normal;
}

void interSectsPlane(Plane! plane, RayIntersection! isect)
{
  double d = -1.0 *dot(plane.position, plane.normal);
  double v = dot(isect.rayDirection, plane.normal);

  if (v > 0.0000000000000001 || v < -0.00000000000000001) {
	double t = -1.0 * (dot(isect.rayPosition, plane.normal) + d) / v;
	
	if ((t > 0.0) && (t < isect.distance))
	  {
		isect.distance = t;
		isect.isHit = true;
		isect.hitPosition.x = isect.rayPosition.x + isect.rayDirection.x * t;
		isect.hitPosition.y = isect.rayPosition.y + isect.rayDirection.y * t;
		isect.hitPosition.z = isect.rayPosition.z + isect.rayDirection.z * t;
		isect.normal.x = plane.normal.x;
		isect.normal.y = plane.normal.y;
		isect.normal.z = plane.normal.z;
	  }
  }
}


Sphere[]! spheres;
Plane! plane;

void getOrthoBasis (Vec! normal, Vec[]! orthoBasis)
{
  orthoBasis[0] = new Vec();
  orthoBasis[1] = new Vec();
  orthoBasis[2] = new Vec();
  Vec! o0 = orthoBasis[0];
  Vec! o1 = orthoBasis[1];
  Vec! o2 = orthoBasis[2];

  o2.x = normal.x;
  o2.y = normal.y;
  o2.z = normal.z;

  if ((normal.x < 0.6) && (normal.x > -0.6)) {
	o1.x  = 1.0;
  } else if ((normal.y < 0.6) && (normal.y > -0.6)) {
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


void getAmbientOcclusion(RayIntersection! isect, Vec! ambientOcclusion)
{
  int i, j;
  int ntheta = NAO_SAMPLES;
  int nphi = NAO_SAMPLES;
  double eps = 0.0001;

  RayIntersection! occlsect = new RayIntersection();
  occlsect.rayPosition = new Vec();
  occlsect.rayDirection = new Vec();
  occlsect.hitPosition = new Vec();
  occlsect.normal = new Vec();

  occlsect.rayPosition.x = isect.hitPosition.x + eps * isect.normal.x;
  occlsect.rayPosition.y = isect.hitPosition.y + eps * isect.normal.y;
  occlsect.rayPosition.z = isect.hitPosition.z + eps * isect.normal.z;
  Vec[]! basis = new Vec[3];

  getOrthoBasis(isect.normal, basis);
  
  int hitCount = 0;
  for (j = 0; j < ntheta; j++) {
	for (i = 0; i < nphi; i++) {
	  double theta;
	  theta = Math.sqrt(Float.random());
	  double phi = 2.0 * Math.PI * Float.random();
	  double x = Math.cos(phi) * theta;
	  double y = Math.sin(phi) * theta;
	  double z = Math.sqrt(1.0 - theta * theta);
	  occlsect.rayDirection.x = x * basis[0].x + y * basis[1].x + z * basis[2].x;
	  occlsect.rayDirection.y = x * basis[0].y + y * basis[1].y + z * basis[2].y;
  	  occlsect.rayDirection.z = x * basis[0].z + y * basis[1].z + z * basis[2].z;
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

void render(int[]! byteImage, int width, int height, int numberOfSubSamples)
{
  Float[] fimg = new Float[width * height * 3];
  RayIntersection! isect = new RayIntersection();
  int y, x,v,u;
  isect.rayPosition = new Vec();
  isect.rayDirection = new Vec();
  isect.hitPosition = new Vec();
  isect.normal = new Vec();

  for (y = 0; y < height; y++){
	for (x = 0;x < width; x++) {
	  for (v = 0; v < numberOfSubSamples; v++){
		for (u = 0; u < numberOfSubSamples; u++) {
		  isect.rayDirection.x = (x + (u / (double)numberOfSubSamples) - (width / 2.0)) / (width / 2.0);
		  isect.rayDirection.y = -(y + (v / (double)numberOfSubSamples) - (height / 2.0)) / (height / 2.0);
		  isect.rayDirection.z = -1.0;
		  isect.distance = 1000000000;
		  isect.isHit = false;
		  normalize(isect.rayDirection);
		  interSectsSphere(spheres[0], isect);
		  interSectsSphere(spheres[1], isect);
		  interSectsSphere(spheres[2], isect);
		  interSectsPlane(plane, isect);
		  
		  if (isect.isHit == true) {

			Vec! ambientOcclusion = new Vec();

			getAmbientOcclusion(isect, ambientOcclusion);

			int p = 3 * (y * width + x);
			fimg[p] = fimg[p] + ambientOcclusion.x;
			fimg[p+1] = fimg[p+1] + ambientOcclusion.y;
			fimg[p+2] = fimg[p+2] + ambientOcclusion.z;
		  }
		}
	  }
	  int p1 = 3 * (y * width + x);
	  int num = numberOfSubSamples * numberOfSubSamples;

	  fimg[p1] = fimg[p1] / (double)(num);
	  fimg[p1 + 1] = fimg[p1 + 1] / (double)(num);
	  fimg[p1 + 2] = fimg[p1 + 2] / (double)(num);
	  //AOBench.write(p1, clamp(fimg[p1]));
	  //AOBench.write(p1+1, clamp(fimg[p1+1]));
	  //AOBench.write(p1+2, clamp(fimg[p1+2]));
	  byteImage[p1] = clamp(fimg[p1]);
	  byteImage[p1 + 1] = clamp(fimg[p1 +1]);
	  byteImage[p1 + 2] = clamp(fimg[p1 + 2]);
	}
  }

}

void setupScene()
{
  spheres[0] = new Sphere();
  //  ((Sphere)spheres[0]).center = new Vec(-2.0, 0.0, -3.5);
  ((Sphere)spheres[1]).center = new Vec();
  ((Sphere)spheres[1]).center.x = -2.0;
  ((Sphere)spheres[1]).center.y = 0.0;
  ((Sphere)spheres[1]).center.z = -3.5;
  ((Sphere)spheres[0]).radius = 0.5;
  
  spheres[1] = new Sphere();
  ((Sphere)spheres[1]).center = new Vec();
  ((Sphere)spheres[1]).center.x = -0.5;
  ((Sphere)spheres[1]).center.y = 0.0;
  ((Sphere)spheres[1]).center.z = -3.0;
  ((Sphere)spheres[1]).radius = 0.5;  

  
  ((Sphere)spheres[2]).center = new Vec();
  ((Sphere)spheres[2]).center.x = 1.0;
  ((Sphere)spheres[2]).center.y = 0.0;
  ((Sphere)spheres[2]).center.z = -2.2;
  ((Sphere)spheres[2]).radius = 0.5;

  //  spheres[0].printing();
  //spheres[1].printing();
  //spheres[2].printing();
  
  plane.position = new Vec();
  plane.position.x = 0.0;
  plane.position.y = -0.5;
  plane.position.z = 0.0;

  plane.normal = new Vec();
  plane.normal.y = 1.0;
}

void run()
{
  int[] img = new int[WIDTH * HEIGHT * 3];
  int i;
  setupScene();
  //AOBench.open();
  render(img, WIDTH, HEIGHT, NSUBSAMPLES);
  //AOBench.close();
  
  OutputStream out = new OutputStream("test2.ppm", "wb");
  out << "P6" << EOL;
  out << WIDTH << " " << HEIGHT << EOL;
  out << "255" << EOL;
  for (i = 0; i<|img| < i++) {
	out.putc(img[i]);
  }
  out.close();
  
}

  

int main(String[] args) {
  spheres = new Sphere[3];
  
  plane = new Plane();
  run();
}
