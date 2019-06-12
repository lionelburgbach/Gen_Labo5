// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie {
public:
    static const int CHILDRENS   = 2;
    static const int REGULAR     = 0;
    static const int NEW_RELEASE = 1;

    Movie( const std::string& title, int priceCode = REGULAR );

    int getPriceCode() const;
    void setPriceCode( int arg );
    std::string getTitle() const;
    double getRentingPrice(int daysRented) const;
    int frequentRenterPoints(int daysRented) const;

private:
    std::string _title;
    int _priceCode;
};

inline Movie::
Movie( const std::string& title, int priceCode )
        : _title( title )
        , _priceCode( priceCode )
{}

inline int Movie::
getPriceCode() const { return _priceCode; }

inline void Movie::
setPriceCode( int arg ) { _priceCode = arg; }

inline std::string Movie::
getTitle() const { return _title; }

inline double Movie::
getRentingPrice(int daysRented) const {
    double amount = 0.0;
    switch(_priceCode){
        case Movie::REGULAR:
            amount += 2;
            if (daysRented > 2)
                amount += (daysRented - 2) * 1.5;
            break;
        case Movie::NEW_RELEASE:
            amount += daysRented * 3;
            break;
        case Movie::CHILDRENS:
            amount += 1.5;
            if (daysRented > 3)
                amount += (daysRented - 3) * 1.5;
            break;
    }
    return amount;
}

inline int Movie::
frequentRenterPoints(int daysRented) const{
    //default frequent renter points
    int frequentRenterPoints = 1;
    // add bonus for a two day new release rental
    if ( ( this->getPriceCode() == Movie::NEW_RELEASE )
         && daysRented > 1 ) frequentRenterPoints++;

    return frequentRenterPoints;
}

#endif // MOVIE_H