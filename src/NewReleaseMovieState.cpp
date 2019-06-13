//
// Created by NS on 6/13/2019.
//

#include "NewReleaseMovieState.h"

int NewReleaseMovieState::frequentRenterPoints(int daysRented) const {
    // get default renter points
    double frequentRenterPoints = MovieState::frequentRenterPoints(daysRented);
    // add bonus for a two day new release rental
    if (daysRented > 1) frequentRenterPoints++;
    return  frequentRenterPoints;

}

double NewReleaseMovieState::getRentingPrice(int daysRented) const {
    return daysRented * 3;
}

NewReleaseMovieState::NewReleaseMovieState(const std::string &title) : MovieState(title) {}

NewReleaseMovieState::~NewReleaseMovieState() {}
