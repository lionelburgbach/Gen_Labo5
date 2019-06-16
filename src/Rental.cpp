//
// Created by Lionel Burgbacher on 2019-06-10.
//
#include "Rental.h"

double Rental::amount() const {
    return this->getMovie().getRentingPrice(this->getDaysRented());
}