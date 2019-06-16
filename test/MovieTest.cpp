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