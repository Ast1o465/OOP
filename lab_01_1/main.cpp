#include "traveldestination.h"
#include <iostream>

using namespace std;

int main()
{
    TravelDestination td;
    td.setName("Krop / Kyiv");
    td.setCountry("Ukraine");
    td.setRating(4.7);

    cout << "Destination: " << td.getName() << ", Country: " << td.getCountry() << ", Rating: " << td.getRating() << endl;

    return 0;
}
