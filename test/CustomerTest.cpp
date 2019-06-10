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
customer.addRental( Rental( Movie("Interstellar", Movie::REGULAR ), 10));
customer.addRental( Rental( Movie("The Land Befor Time", Movie::CHILDRENS), 10.5));

std::string expected = "Rental Record for Lionel\n\tInterstellar\t14\n\tThe Land Befor Time\t12\nAmount owed is 26\nYou earned 2 frequent renter points";

EXPECT_EQ(customer.statement(),expected);
}

TEST(customerTest, amount)
{

    Customer customer("Lionel");
    Rental each = Rental( Movie("Interstellar", Movie::REGULAR ), 10);

    double thisAmount = 0;
    thisAmount += customer.amount(thisAmount, each);

    EXPECT_EQ(thisAmount, 14);
}