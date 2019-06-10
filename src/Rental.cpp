//
// Created by Lionel Burgbacher on 2019-06-10.
//
#include "Rental.h"

double Rental::amount(double thisAmount) const {
    switch (this->getMovie().getPriceCode()) {
        case Movie::REGULAR:
            thisAmount += 2;
            if (getDaysRented() > 2)
                thisAmount += (getDaysRented() - 2) * 1.5;
            break;
        case Movie::NEW_RELEASE:
            thisAmount += getDaysRented() * 3;
            break;
        case Movie::CHILDRENS:
            thisAmount += 1.5;
            if (getDaysRented() > 3)
                thisAmount += (getDaysRented() - 3) * 1.5;
            break;
    }
    return thisAmount;
}