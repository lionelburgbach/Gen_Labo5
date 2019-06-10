//
// Created by Lionel Burgbacher on 2019-06-07.
//

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../src/Customer.h"

#include <string>

TEST(customerTest, statement)
{

Customer customer("Lionel");
customer.addRental( Rental( Movie("Interstellar"), 7));
customer.addRental( Rental( Movie("The Land Befor Time", Movie::CHILDRENS), 3));

std::string expected = "Rental Record for Lionel\n\tInterstellar\t9.5\n\tThe Land Befor Time\t1.5\nAmount owed is 11\nYou earned 2 frequent renter points";

EXPECT_EQ(customer.statement(),expected);
}

TEST(customerTest, amount)
{
    Customer customer("Lionel");
    Rental each = Rental( Movie("Interstellar"), 10);

    double thisAmount = 0;
    thisAmount += customer.amount(thisAmount, each);

    EXPECT_EQ(thisAmount, 14);
}