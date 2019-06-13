// Customer.cpp
#include <sstream>
#include <vector>
#include "Customer.h"
#include "Rental.h"

using std::ostringstream;
using std::vector;

using namespace std;

string Customer::statement()
{
    double totalAmount = 0;
    int frequentRenterPoints = 0;
    vector< Rental >::iterator iter = _rentals.begin();
    vector< Rental >::iterator iter_end = _rentals.end();
    ostringstream result;
    result << "Rental Record for " << getName() << "\n";
    for ( ; iter != iter_end; ++iter ) {
        double thisAmount = 0;
        Rental each = *iter;

        // determine amounts for each line
        thisAmount = each.getRentingPrice();

        // add the frequent renter points earned with this renting to the total
        frequentRenterPoints += each.frequentRenterPoints();

        // show figures for this rental
        result << "\t" << each.getMovie().getTitle() << "\t" << thisAmount << "\n";
        totalAmount += thisAmount;
    }
    // add footer lines
    result << "Amount owed is " << totalAmount << "\n"<< "You earned " << frequentRenterPoints << " frequent renter points";
    return result.str();
}
