#include "viewport.h"

Viewport::Viewport(QWidget *parent) : QOpenGLWidget(parent)
{
}

Viewport::~Viewport()
{
}

void Viewport::initializeGL()
{
  glClearColor(0.09411764705f, 0.09411764705f, 0.09411764705f, 1.0f); // Set background color to black and opaque
  glClearDepth(1.0f);                                              // Set background depth to farthest
  glEnable(GL_DEPTH_TEST);                                         // Enable depth testing for z-culling
  glDepthFunc(GL_LEQUAL);                                          // Set the type of depth-test
  glShadeModel(GL_SMOOTH);                                         // Enable smooth shading
  glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);               // Nice perspective corrections
}

void Viewport::resizeGL(int w, int h)
{
  // Compute aspect ratio of the new window
  if (h == 0)
    h = 1; // To prevent divide by 0
  GLfloat aspect = (GLfloat)w / (GLfloat)h;

  // Set the viewport to cover the new window
  glViewport(0, 0, w, h);

  // Set the aspect ratio of the clipping volume to match the viewport
  glMatrixMode(GL_PROJECTION); // To operate on the Projection matrix
  glLoadIdentity();            // Reset
  // Enable perspective projection with fovy, aspect, zNear and zFar
  gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}

void Viewport::paintGL()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
  glMatrixMode(GL_MODELVIEW);                         // To operate on model-view matrix

  // Render a color-cube consisting of 6 quads with different colors
  glLoadIdentity();                // Reset the model-view matrix
  glTranslatef(1.5f, 0.0f, -7.0f); // Move right and into the screen

  glBegin(GL_QUADS); // Begin drawing the color cube with 6 quads
  // Top face (y = 1.0f)
  // Define vertices in counter-clockwise (CCW) order with normal pointing out
  glColor3f(0.0f, 1.0f, 0.0f); // Green
  glVertex3f(1.0f, 1.0f, -1.0f);
  glVertex3f(-1.0f, 1.0f, -1.0f);
  glVertex3f(-1.0f, 1.0f, 1.0f);
  glVertex3f(1.0f, 1.0f, 1.0f);

  // Bottom face (y = -1.0f)
  glColor3f(1.0f, 0.5f, 0.0f); // Orange
  glVertex3f(1.0f, -1.0f, 1.0f);
  glVertex3f(-1.0f, -1.0f, 1.0f);
  glVertex3f(-1.0f, -1.0f, -1.0f);
  glVertex3f(1.0f, -1.0f, -1.0f);

  // Front face  (z = 1.0f)
  glColor3f(1.0f, 0.0f, 0.0f); // Red
  glVertex3f(1.0f, 1.0f, 1.0f);
  glVertex3f(-1.0f, 1.0f, 1.0f);
  glVertex3f(-1.0f, -1.0f, 1.0f);
  glVertex3f(1.0f, -1.0f, 1.0f);

  // Back face (z = -1.0f)
  glColor3f(1.0f, 1.0f, 0.0f); // Yellow
  glVertex3f(1.0f, -1.0f, -1.0f);
  glVertex3f(-1.0f, -1.0f, -1.0f);
  glVertex3f(-1.0f, 1.0f, -1.0f);
  glVertex3f(1.0f, 1.0f, -1.0f);

  // Left face (x = -1.0f)
  glColor3f(0.0f, 0.0f, 1.0f); // Blue
  glVertex3f(-1.0f, 1.0f, 1.0f);
  glVertex3f(-1.0f, 1.0f, -1.0f);
  glVertex3f(-1.0f, -1.0f, -1.0f);
  glVertex3f(-1.0f, -1.0f, 1.0f);

  // Right face (x = 1.0f)
  glColor3f(1.0f, 0.0f, 1.0f); // Magenta
  glVertex3f(1.0f, 1.0f, -1.0f);
  glVertex3f(1.0f, 1.0f, 1.0f);
  glVertex3f(1.0f, -1.0f, 1.0f);
  glVertex3f(1.0f, -1.0f, -1.0f);
  glEnd(); // End of drawing color-cube

  // Render a pyramid consists of 4 triangles
  glLoadIdentity();                 // Reset the model-view matrix
  glTranslatef(-1.5f, 0.0f, -6.0f); // Move left and into the screen

  glBegin(GL_TRIANGLES); // Begin drawing the pyramid with 4 triangles
  // Front
  glColor3f(1.0f, 0.0f, 0.0f); // Red
  glVertex3f(0.0f, 1.0f, 0.0f);
  glColor3f(0.0f, 1.0f, 0.0f); // Green
  glVertex3f(-1.0f, -1.0f, 1.0f);
  glColor3f(0.0f, 0.0f, 1.0f); // Blue
  glVertex3f(1.0f, -1.0f, 1.0f);

  // Right
  glColor3f(1.0f, 0.0f, 0.0f); // Red
  glVertex3f(0.0f, 1.0f, 0.0f);
  glColor3f(0.0f, 0.0f, 1.0f); // Blue
  glVertex3f(1.0f, -1.0f, 1.0f);
  glColor3f(0.0f, 1.0f, 0.0f); // Green
  glVertex3f(1.0f, -1.0f, -1.0f);

  // Back
  glColor3f(1.0f, 0.0f, 0.0f); // Red
  glVertex3f(0.0f, 1.0f, 0.0f);
  glColor3f(0.0f, 1.0f, 0.0f); // Green
  glVertex3f(1.0f, -1.0f, -1.0f);
  glColor3f(0.0f, 0.0f, 1.0f); // Blue
  glVertex3f(-1.0f, -1.0f, -1.0f);

  // Left
  glColor3f(1.0f, 0.0f, 0.0f); // Red
  glVertex3f(0.0f, 1.0f, 0.0f);
  glColor3f(0.0f, 0.0f, 1.0f); // Blue
  glVertex3f(-1.0f, -1.0f, -1.0f);
  glColor3f(0.0f, 1.0f, 0.0f); // Green
  glVertex3f(-1.0f, -1.0f, 1.0f);
  glEnd(); // Done drawing the pyramid
}
