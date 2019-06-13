//
// Created by NS on 6/13/2019.
//

#ifndef LABO_5_CHILDRENMOVIESTATE_H
#define LABO_5_CHILDRENMOVIESTATE_H


#include "MovieState.h"

class ChildrenMovieState : public MovieState {

public:
    ChildrenMovieState(const std::string& title);
    double getRentingPrice(int daysRented) const override;
    ~ChildrenMovieState() override;
};


#endif //LABO_5_CHILDRENMOVIESTATE_H
