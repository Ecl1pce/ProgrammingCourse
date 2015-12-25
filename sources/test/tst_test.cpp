#include <QString>
#include <QtTest>

class test : public QObject
{
    Q_OBJECT

public:
    test();

private Q_SLOTS:
    void testForMatrixCheck();
};

test::test(){}

void test::testForMatrixCheck()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(test)

#include "tst_test.moc"
