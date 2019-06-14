//
// Created by Lionel Burgbacher on 2019-06-10.
//
#include "Rental.h"

double Rental::amount() const {
    double amount = 0.0;
    switch (this->getMovie().getPriceCode()) {
        case Movie::REGULAR:
            amount += 2;
            if (getDaysRented() > 2)
                amount += (getDaysRented() - 2) * 1.5;
            break;
        case Movie::NEW_RELEASE:
            amount += getDaysRented() * 3;
            break;
        case Movie::CHILDRENS:
            amount += 1.5;
            if (getDaysRented() > 3)
                amount += (getDaysRented() - 3) * 1.5;
            break;
    }
    return amount;
}