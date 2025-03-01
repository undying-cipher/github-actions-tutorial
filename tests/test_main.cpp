#include <gtest/gtest.h>
#include "Transform.h"

// INFO: Test values
auto oldX{1}, oldY{2}, oldZ{3}, newX{4}, newY{5}, newZ{6};

// INFO:  Test fixture for transform
class TransformTest : public ::testing::Test {
protected:
    TransformTest() : transform(oldX, oldY, oldZ) {}
    Transform transform;
};

// INFO: Test transform initial position
TEST_F(TransformTest, InitialPositionTest) {
    EXPECT_FLOAT_EQ(transform.getPositionX(), oldX);
    EXPECT_FLOAT_EQ(transform.getPositionY(), oldY);
    EXPECT_FLOAT_EQ(transform.getPositionZ(), oldZ);
}

// INFO: Test setting position
TEST_F(TransformTest, SetPositionTest) {
    transform.setPosition(newX, newY, newZ);
    EXPECT_FLOAT_EQ(transform.getPositionX(), newX);
    EXPECT_FLOAT_EQ(transform.getPositionY(), newY);
    EXPECT_FLOAT_EQ(transform.getPositionZ(), newZ);
}

// INFO: Test updating transform
TEST_F(TransformTest, UpdateTest) {
    testing::internal::CaptureStdout();
    transform.update();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Translation transform: (1.000000, 2.000000, 3.000000)"), std::string::npos);
}
