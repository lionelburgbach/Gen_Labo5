#include <iostream>

#include "Customer.h"

int main() {

    Customer customer("Olivier");
    customer.addRental( *new Rental( *new Movie("Karate Kid"), 7));
    customer.addRental( *new Rental( *new Movie( "Avengers: Endgame", Movie::NEW_RELEASE ), 5));
    customer.addRental( *new Rental( *new Movie("Snow White", Movie::CHILDREN), 3 ));

    std::cout << customer.statement() << std::endl;

    return 0;
}