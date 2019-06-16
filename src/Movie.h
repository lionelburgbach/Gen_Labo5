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

    Movie( MovieState* ms );

    //TODO implement this copy contructor
    //Movie( const Movie& movie);

    int getPriceCode() const;
    void setPriceCode( MovieState* ms );
    std::string getTitle() const;
    double getRentingPrice(int daysRented) const;
    int frequentRenterPoints(int daysRented) const;

    ~Movie();

private:
    MovieState* state;

};

inline Movie::
Movie( MovieState* ms )
{
    state = ms;
}

inline void Movie::
setPriceCode( MovieState* ms ) {
        delete state;
        state = ms;
}

inline std::string Movie::
getTitle() const { return state->getTitle(); }


inline Movie::~Movie(){
    /*
     * TODO uncomment the code but dont forget to implement a copy constructor before uncommenting
     * otherwise a sigtrap may happen:
     * (if one use the implicit copy constructor it would lead to multiple delete on state)
     */
    //delete state;
}

/*inline Movie::
Movie(const Movie &movie) {
    //TODO implement this copy contuctor
    //this->state = new MovieState(movie.state);
}*/


#endif // MOVIE_H