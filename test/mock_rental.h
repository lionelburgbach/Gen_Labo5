//
// Created by NS on 6/16/2019.
//

#ifndef LABO_5_MOCK_RENTAL_H
#define LABO_5_MOCK_RENTAL_H

#include "../src/Rental.h"
#include "gmock/gmock.h"


class MockRental : public Rental {
public:
    MOCK_METHOD0(getRentingPrice, double());
};

#endif //LABO_5_MOCK_RENTAL_H
