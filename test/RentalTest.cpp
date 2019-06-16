//
// Created by Lionel Burgbacher on 2019-06-10.
//

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../src/Rental.h"
#include "mock_rental.h"
#include "mock_movie.h"
using ::testing::AtLeast;

TEST(rentalTest, getRentingPoints)
{
    Rental each = Rental( Movie( new RegularMovieState("Interstellar") ), 10);

    double thisAmount = 0;
    thisAmount += each.getRentingPrice();



    EXPECT_EQ(thisAmount, 14);
}

TEST(rentalTest2, getRenterPoints)
{
    Rental r1 = Rental( Movie( new RegularMovieState("Interstellar") ), 10);
    Rental r2 = Rental( Movie( new RegularMovieState("Interstellar2") ), 1);
    Rental r3 = Rental( Movie( new NewReleaseMovieState("Godzilla 57") ), 1);
    Rental r4 = Rental( Movie( new NewReleaseMovieState("Godzilla 57") ), 18);

    EXPECT_EQ(r1.frequentRenterPoints(), 1);
    EXPECT_EQ(r2.frequentRenterPoints(), 1);
    EXPECT_EQ(r3.frequentRenterPoints(), 1);
    EXPECT_EQ(r4.frequentRenterPoints(), 2);
}

TEST(rentalDelegatePriceCalcultaionToMovie, getRentingPoints){
    //TODO implement the following
    //MockMovie movie(new ChildrenMovieState("Pingu"));
}

