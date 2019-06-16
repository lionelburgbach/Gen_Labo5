//
// Created by NS on 6/13/2019.
//

#include "RegularMovieState.h"


double RegularMovieState::getRentingPrice(int daysRented) const {
    double price = 2.0;
    if (daysRented > 2) price += (daysRented - 2) * 1.5;
    return price;
}

RegularMovieState::RegularMovieState(const std::string &title) : MovieState(title) {}

RegularMovieState::~RegularMovieState() {}
