#include <gtest/gtest.h>
#include <adder.hpp>
#include <example.hpp>

TEST(AdderTestSuite, Test1){
   EXPECT_EQ(3, add(1, 2));
}

TEST(ExampleTestSuite, Test1){
   assert(1==1);
}
