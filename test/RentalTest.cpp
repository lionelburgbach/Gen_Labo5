//
// Created by Lionel Burgbacher on 2019-06-10.
//

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../src/Rental.h"

TEST(rentalTest, amount)
{
    Rental each = Rental( Movie("Interstellar"), 10);

    double thisAmount = 0;
    thisAmount += each.amount(thisAmount);

    EXPECT_EQ(thisAmount, 14);
}