#ifndef VIEWPORT_H
#define VIEWPORT_H

#include <QOpenGLWidget>
#include <GL/glu.h>

class Viewport : public QOpenGLWidget
{
  Q_OBJECT

public:
  Viewport(QWidget *parent);
  ~Viewport();

protected:
  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;
};

#endif // VIEWPORT_H
