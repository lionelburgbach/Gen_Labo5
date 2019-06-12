//
// Created by Lionel Burgbacher on 2019-06-10.
//
#include "Rental.h"

double Rental::getRentingPrice() const {
    return this->getMovie().getRentingPrice(this->getDaysRented());
}

int Rental::frequentRenterPoints() const{
    //default frequent renter points
    int frequentRenterPoints = 1;
    // add bonus for a two day new release rental
    if ( ( this->getMovie().getPriceCode() == Movie::NEW_RELEASE )
         && this->getDaysRented() > 1 ) frequentRenterPoints++;

    return frequentRenterPoints;
}