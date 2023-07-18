//
// Created by dan99 on 23. 7. 17.
//

#include <QTest>

class TestQString : public QObject {
Q_OBJECT
private slots:
		void toUpper() {
			QString str = "Hello";
			QCOMPARE(str.toUpper(), QString("HELLO"));
		};
};
