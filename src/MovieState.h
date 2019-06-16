//
// Created by NS on 6/13/2019.
//

#ifndef LABO_5_MOVIESTATE_H
#define LABO_5_MOVIESTATE_H


#include <string>

class MovieState {

public:
    MovieState(const std::string& title);
    std::string getTitle() const;
    virtual double getRentingPrice(int daysRented) const = 0;
    virtual int frequentRenterPoints(int daysRented) const;
    virtual ~MovieState();

private:
    std::string title;

};

inline MovieState::MovieState(const std::string &title) : title(title) {}

inline MovieState::~MovieState() {}


#endif //LABO_5_MOVIESTATE_H
