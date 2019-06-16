#include "Movie.h"

double Movie::getRentingPrice(int daysRented) const {
    return state->getRentingPrice(daysRented);
}

int Movie::frequentRenterPoints(int daysRented) const{
    return state->frequentRenterPoints(daysRented);
}