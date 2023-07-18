#include "testcase/TestQString.hpp"
#include "testcase/TestMainWindow.hpp"

int main(int argc, char *argv[]) {
  QApplication qApplication(argc, argv);
  bool status = false;
  QObject *parent = nullptr;
  {
    TestQString test;
    status |= QTest::qExec(&test, argc, argv);
  }
  {
    TestMainWindow test;
    status |= QTest::qExec(&test, argc, argv);
  }

  return status != 0 ? 1 : 0;
}