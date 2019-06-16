// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <stdexcept>
#include "MovieState.h"
#include "ChildrenMovieState.h"
#include "RegularMovieState.h"
#include "NewReleaseMovieState.h"

class Movie {
public:
    static const int CHILDREN   = 2;
    static const int REGULAR     = 0;
    static const int NEW_RELEASE = 1;

    Movie( const std::string& title, int priceCode = REGULAR );
    Movie( const Movie& movie);

    int getPriceCode() const;
    void setPriceCode( int arg );
    std::string getTitle() const;
    double getRentingPrice(int daysRented) const;
    int frequentRenterPoints(int daysRented) const;

    ~Movie();

private:
    MovieState* state;
    int _priceCode;

    MovieState* getNewState(const std::string& title, int priceCode);
};

inline Movie::
Movie( const std::string& title, int priceCode )
{
    state = getNewState(title, priceCode);
    _priceCode = priceCode;
}

inline int Movie::
getPriceCode() const { return _priceCode; }

inline void Movie::
setPriceCode( int arg ) {
    if(_priceCode != arg){
        _priceCode = arg;
        MovieState* tmp = getNewState(state->getTitle(), arg);
        delete state;
        state = tmp;
    }
}

inline std::string Movie::
getTitle() const { return state->getTitle(); }

inline MovieState *Movie::getNewState(const std::string& title, int priceCode) {
    switch(priceCode){
        case CHILDREN : return new ChildrenMovieState(title);
            break;
        case REGULAR : return new RegularMovieState(title);
            break;
        case NEW_RELEASE : return new NewReleaseMovieState(title);
            break;
        default: throw std::invalid_argument("no such movie type");
    }
}

inline Movie::~Movie(){
    //TODO solve the sigtrap that happens when uncommenting the next line
    delete state;
}

inline Movie::
Movie(const Movie &movie) {
    this->_priceCode = movie._priceCode;
    this->state = getNewState(movie.state->getTitle(), movie._priceCode);
}


#endif // MOVIE_H