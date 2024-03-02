
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(CheckPrimeTest, TestPrimeNumber) {
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(11));
    EXPECT_TRUE(checkPrime(13));
}
TEST(CheckPrimeTest, TestCompositeNumber) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(10));
    EXPECT_FALSE(checkPrime(12));
}