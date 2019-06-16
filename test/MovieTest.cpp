#include "gtest/gtest.h"
#include "../src/Customer.h"

#include <string>

TEST(MovieTest, getRentingPrice)
{
    Movie movie("Interstellar");
    //EXPECT_LT(movie.getRentingPrice(7), 9.51);
    //EXPECT_LT(9.49, movie.getRentingPrice(7));
    EXPECT_EQ(movie.getRentingPrice(7), 9.5);
}

TEST(MovieTest2, getRenterPoints)
{
    Movie m1("Interstellar");
    Movie m2("Interstellar2");
    Movie m3("Godzilla 57", Movie::NEW_RELEASE);
    Movie m4("Godzilla 57", Movie::NEW_RELEASE);

    EXPECT_EQ(m1.frequentRenterPoints(1), 1);
    EXPECT_EQ(m2.frequentRenterPoints(10), 1);
    EXPECT_EQ(m3.frequentRenterPoints(1), 1);
    EXPECT_EQ(m4.frequentRenterPoints(3), 2);
}