//
// Created by dan99 on 23. 7. 18.
//
#include <QScreen>
#include <QTimer>
#include <QGuiApplication>
#include <QPixmap>
#include <QRect>
#include "ScreenShot.hpp"

void screenshot(QScreen *screen) {
	auto _geom = screen->geometry();
	QPixmap map = screen->grabWindow(0);
	map.save("/home/dan99/CLionProjects/untitled2/screenshot.png");
}

void screenshot_click() {
	QTimer::singleShot(0, []() { screenshot(QGuiApplication::primaryScreen()); });
}
