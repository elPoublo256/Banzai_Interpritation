#include <QString>
#include <QtTest>
/* i include my_interpalation.h and dot try link                          */
/* becouse this file consist only temlates functions                      */
/* and i can just include it without building any (only headers) library  */
/* for building library i need add empty *.cpp file in my project         */
/* i cnow just oune way build only headers library -  empty cpp file      */
/* if you cnow another way, please send it in issues                      */
#include <../my_interpalation.h>

class Qt_unit_testTest : public QObject
{
    Q_OBJECT

public:
    Qt_unit_testTest();

private Q_SLOTS:
    void testCase1();
};

Qt_unit_testTest::Qt_unit_testTest()
{
}

void Qt_unit_testTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(Qt_unit_testTest)

#include "tst_qt_unit_testtest.moc"
