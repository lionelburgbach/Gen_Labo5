//
// Created by NS on 6/16/2019.
//

#ifndef LABO_5_MOCK_MOVIE_H
#define LABO_5_MOCK_MOVIE_H


#include "../src/Movie.h"
#include "gmock/gmock.h"


class MockMovie : public Movie {
public:
    MOCK_METHOD1(getRentingPrice, double(int));
};


#endif //LABO_5_MOCK_MOVIE_H
