//
// Created by Lionel Burgbacher on 2019-06-10.
//
#include "Rental.h"

double Rental::getRentingPrice() const {
    return this->getMovie().getRentingPrice(this->getDaysRented());
}

int Rental::frequentRenterPoints() const {
    return this->getMovie().frequentRenterPoints(this->getDaysRented());
}