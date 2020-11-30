#include <gmock/gmock.h>
#include <gtest/gtest.h>
using ::testing::Matcher;

MATCHER_P(BarPlusBazEq, expected_sum, "") { return arg.bar() + arg.baz() == expected_sum; }

class Foo2 {
public:
    virtual int bar() const { return 4; }
    virtual int baz() const { return 5; }

    virtual void DoThis(const Foo2 &foo) {
        std::cout << "Foo2:DoThis" << std::endl;
    }
    virtual ~Foo2() {}
};

class MockFoo2 : public Foo2 {
public:
    MOCK_METHOD(void, DoThis, (const Foo2&));
};

TEST(MockMatcher, Matcher)
{
    MockFoo2 mock;
    EXPECT_CALL(mock, DoThis(BarPlusBazEq(9)));

    // You also have to do something to trigger the expected call...
    Foo2 foo2;
    mock.DoThis(foo2);
}
