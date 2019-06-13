//
// Created by NS on 6/13/2019.
//

#include "ChildrenMovieState.h"

double ChildrenMovieState::getRentingPrice(int daysRented) const {
    double price = 1.5;
    if (daysRented > 3) price += (daysRented - 3) * 1.5;
    return price;
}

ChildrenMovieState::ChildrenMovieState(const std::string &title) : MovieState(title) {}

ChildrenMovieState::~ChildrenMovieState() {}
