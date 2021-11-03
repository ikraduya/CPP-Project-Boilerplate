#include <gtest/gtest.h>
#include <memory>

#include "exampleClass.hpp"

TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal
  EXPECT_STRNE("hello", "world");
  // Expect equality
  EXPECT_EQ(7 * 6, 42);
}

TEST(ExampleClassTest, allTest) {
  auto ec = std::make_unique<Example>();

  int expected_value = 0;
  EXPECT_EQ(ec->returnMember(), expected_value);
  ec->increaseMember();
  EXPECT_EQ(ec->returnMember(), expected_value + 1);

  ec.reset(new Example(5));

  expected_value = 5;
  EXPECT_EQ(ec->returnMember(), expected_value);
  ec->increaseMember();
  EXPECT_EQ(ec->returnMember(), expected_value + 1);

  auto ecCopy(*ec);
  expected_value = 6;
  EXPECT_EQ(ec->returnMember(), expected_value);
  ec->increaseMember();
  EXPECT_EQ(ec->returnMember(), expected_value + 1);
}
