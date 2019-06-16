//
// Created by NS on 6/13/2019.
//

#ifndef LABO_5_REGULARMOVIESTATE_H
#define LABO_5_REGULARMOVIESTATE_H


#include "MovieState.h"

class RegularMovieState : public MovieState {

public:
    RegularMovieState(const std::string& title);
    double getRentingPrice(int daysRented) const override;
    ~RegularMovieState() override;
};




#endif //LABO_5_REGULARMOVIESTATE_H
