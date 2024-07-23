#include "pch.h"
#include "../UnitTest-1/main.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestName2) {
  int c = add(0, 0);
  EXPECT_EQ(0, c);
}