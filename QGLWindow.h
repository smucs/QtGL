/*
 * QGLWindow.h
 *
 *  Created on: Dec 29, 2011
 *      Author: sc-gj
 */

#ifndef QGLWINDOW_H_
#define QGLWINDOW_H_

#include <QGLWidget>

class QGLWindow : public QGLWidget
{
	Q_OBJECT //must be included for signals and slots

public:
	QGLWindow(QWidget *parent = NULL);
	virtual ~QGLWindow();

protected:
	void initializeGL();
	void resizeGL(int w, int h);
	void paintGL();
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void keyPressEvent(QKeyEvent *event);
};

#endif /* QGLWINDOW_H_ */
