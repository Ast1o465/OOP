#include <iostream>
#include <string>

using namespace std;

struct TravelDestination
{
    string name;
    string country;
    double rating;
};

void setName(TravelDestination &td, string name)
{
    td.name = name;
}

void setCountry(TravelDestination &td, string country)
{
    td.country = country;
}

void setRating(TravelDestination &td, double rating)
{
    td.rating = rating;
}

string getName(TravelDestination td)
{
    return td.name;
}

string getCountry(TravelDestination td)
{
    return td.country;
}

double getRating(TravelDestination td)
{
    return td.rating;
}

int main()
{
    TravelDestination td;

    setName(td, "Kyiv");
    setCountry(td, "Ukraine");
    setRating(td, 4.8);

    cout << "Destination: " << getName(td) << ", Country: " << getCountry(td) << ", Rating: " << getRating(td) << endl;

    return 0;
}
