//
// Created by NS on 6/13/2019.
//

#include "MovieState.h"

std::string MovieState::getTitle() const {
    return title;
}

int MovieState::frequentRenterPoints(int daysRented) const {
    //default frequent renter points
    return 1;
}
