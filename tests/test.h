#pragma once

#include <gtest/gtest.h>

#define MAIN \
int main(int argc, char** argv) { \
    ::testing::InitGoogleTest(&argc, argv); \
    return RUN_ALL_TESTS(); \
}
