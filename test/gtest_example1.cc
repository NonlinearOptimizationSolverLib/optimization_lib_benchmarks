#include <gtest/gtest.h>
#include <iostream>
#include <string>

int
main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(gtest, example0) { printf("hello world!\n"); }

TEST(gtest, example1) { printf("hello gtest!\n"); }
