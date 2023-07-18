#include <QApplication>
#include <QDebug>
#include <QPushButton>
#include <QScreen>
#include <QTest>
#include <QTimer>
#include "MainWindow.hpp"


int main(int argc, char *argv[]) {
	QApplication qApplication(argc, argv);
	MainWindow w;
	w.show();

	return qApp->exec();
}