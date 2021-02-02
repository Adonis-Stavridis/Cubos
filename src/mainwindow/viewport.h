#ifndef VIEWPORT_H
#define VIEWPORT_H

#include <QOpenGLWidget>

class Viewport : public QOpenGLWidget
{
	Q_OBJECT

public:
	Viewport(QWidget *parent);
};

#endif // VIEWPORT_H
