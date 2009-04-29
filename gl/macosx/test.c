#include <GLUT/glut.h>
#include <OpenGL/gl.h>

void display(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  /*glColor3d(1.0, 0.0, 0.0);
  glBegin(GL_POLYGON);
  glVertex2d(-0.9, -0.9);
  glVertex2d(0.9,-0.9);
  glVertex2d(0.9,0.9);
  glVertex2d(-0.9, 0.9);
  glEnd();
  */
  glFlush();
}

void init(void)
{
  //glClearColor(1.0, 1.0, 1.0, 1.0);
}

int main (int ac, char **av)
{
  printf("%d %s\n", ac, *av);
  glutInit(&ac, av);
  glutInitDisplayMode(GLUT_RGBA);
  glutCreateWindow("Hello world!");
  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}

