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
    thisAmount += each.getRentingPrice();



    EXPECT_EQ(thisAmount, 14);
}

TEST(rentalTest2, getRenterPoints)
{
    Rental r1 = Rental( Movie("Interstellar"), 10);
    Rental r2 = Rental( Movie("Interstellar2"), 1);
    Rental r3 = Rental( Movie("Godzilla 57", Movie::NEW_RELEASE), 1);
    Rental r4 = Rental( Movie("Godzilla 57", Movie::NEW_RELEASE), 18);

    EXPECT_EQ(r1.frequentRenterPoints(), 1);
    EXPECT_EQ(r2.frequentRenterPoints(), 1);
    EXPECT_EQ(r3.frequentRenterPoints(), 1);
    EXPECT_EQ(r4.frequentRenterPoints(), 2);
}

