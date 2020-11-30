#include "gtest/gtest.h"

double MyFormula(double A, double B, double C)
{
    return A*B - C*C;   // Example. The real one is much more complex
}

class MyTest:public ::testing::TestWithParam<std::tuple<double, double, double>>
{
protected:

    MyTest(){ Index++; }
    virtual void SetUp()
    {
        m_C = std::get<0>(GetParam());
        m_A = std::get<1>(GetParam());
        m_B = std::get<2>(GetParam());
    }

    double m_A;
    double m_B;
    double m_C;

    static double ExpectedRes[];
    static int Index;

};

int MyTest::Index = -1;

double MyTest::ExpectedRes[] =
{
//               C = 1
//      B:   1     2     3     4     5     6     7     8     9    10
/*A =  1*/  0.0,  1.0,  2.0,  3.0,  4.0,  5.0,  6.0,  7.0,  8.0,  9.0,
/*A =  2*/  1.0,  3.0,  5.0,  7.0,  9.0, 11.0, 13.0, 15.0, 17.0, 19.0,
/*A =  3*/  2.0,  5.0,  8.0, 11.0, 14.0, 17.0, 20.0, 23.0, 26.0, 29.0,

//               C = 2
//      B:     1     2     3     4     5     6     7     8     9    10
/*A =  1*/   -3.0, -2.0, -1.0,  0.0,  1.0,  2.0,  3.0,  4.0,  5.0,  6.0,
/*A =  2*/   -2.0,  0.0,  2.0,  4.0,  6.0,  8.0, 10.0, 12.0, 14.0, 16.0,
/*A =  3*/   -1.0,  2.0,  5.0,  8.0, 11.0, 14.0, 17.0, 20.0, 23.0, 26.0,
};

TEST_P(MyTest, TestFormula)
{
    double res = MyFormula(m_A, m_B, m_C);
    ASSERT_EQ(ExpectedRes[Index], res);
}

INSTANTIATE_TEST_CASE_P(TestWithParameters,
                        MyTest,
                        testing::Combine( testing::Range(1.0, 3.0), // C
                                          testing::Range(1.0, 4.0), // A
                                          testing::Range(1.0, 11.0) // B
                                          ));
