//
// Created by Arkadiy Pozharskiy on 22.10.22.
//

#include "gtest/gtest.h"

#include "SampleClass.h"

namespace {
// Tests the hello() method.

    TEST(SampleClass, Hello) {
        SampleClass c;

        EXPECT_EQ(1, c.hello());
    }

    TEST(SampleClass, Bye) {
        SampleClass c;

        EXPECT_EQ(2, c.bye());
    }

}  // namespace