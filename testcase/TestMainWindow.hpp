//
// Created by dan99 on 23. 7. 18.
//
#include <QObject>
#include <QTest>
#include <MainWindow.hpp>

class TestMainWindow : public QObject {
Q_OBJECT
private:
  Ui::MainWindow *ui;
private slots:
  void initTestCase() {
    qDebug() << "Make sure you have a working X server running and that $DISPLAY is set correctly.";
    MainWindow window;
    window.show();
  };
  void cleanupTestCase() {
    qDebug() << "Cleanup";
  };
  void toUpper() {
  };
};
