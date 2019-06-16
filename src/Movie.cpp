#include "Movie.h"

const int Movie::CHILDREN;
const int Movie::REGULAR;
const int Movie::NEW_RELEASE;

double Movie::getRentingPrice(int daysRented) const {
    return state->getRentingPrice(daysRented);
}

int Movie::frequentRenterPoints(int daysRented) const{
    return state->frequentRenterPoints(daysRented);
}