//
// Created by NS on 6/13/2019.
//

#ifndef LABO_5_NEWRELEASEMOVIESTATE_H
#define LABO_5_NEWRELEASEMOVIESTATE_H


#include "MovieState.h"

class NewReleaseMovieState : public MovieState {
public:
    NewReleaseMovieState(const std::string& title);
    double getRentingPrice(int daysRented) const override;
    int frequentRenterPoints(int daysRented) const override;
    ~NewReleaseMovieState() override;
};


#endif //LABO_5_NEWRELEASEMOVIESTATE_H
