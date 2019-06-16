#include <iostream>

#include "Customer.h"

int main() {

    Customer customer("Olivier");
    customer.addRental( Rental( Movie( new RegularMovieState("Karate Kid") ), 7));
    customer.addRental( Rental( Movie( new NewReleaseMovieState("Avengers: Endgame") ), 5));
    customer.addRental( Rental( Movie( new ChildrenMovieState("Snow White") ), 3 ));

    std::cout << customer.statement() << std::endl;

    return 0;
}