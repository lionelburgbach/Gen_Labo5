#include "gtest/gtest.h"
#include "../src/Customer.h"

#include <string>

TEST(MovieTest, getRentingPrice)
{
    Movie movie( new RegularMovieState("Interstellar") );
    //EXPECT_LT(movie.getRentingPrice(7), 9.51);
    //EXPECT_LT(9.49, movie.getRentingPrice(7));
    EXPECT_EQ(movie.getRentingPrice(7), 9.5);
}

TEST(MovieTest2, getRenterPoints)
{
    Movie m1( new RegularMovieState("Interstellar") );
    Movie m2( new RegularMovieState("Interstellar2") );
    Movie m3( new NewReleaseMovieState("Godzilla 57") );
    Movie m4( new NewReleaseMovieState("Godzilla 57") );

    EXPECT_EQ(m1.frequentRenterPoints(1), 1);
    EXPECT_EQ(m2.frequentRenterPoints(10), 1);
    EXPECT_EQ(m3.frequentRenterPoints(1), 1);
    EXPECT_EQ(m4.frequentRenterPoints(3), 2);
}