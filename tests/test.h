#pragma once

#include <gtest/gtest.h>

inline int exec_test(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

#define MAIN \
int main(int argc, char** argv) { return exec_test(argc, argv); }
