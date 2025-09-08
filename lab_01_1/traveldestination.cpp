#include "traveldestination.h"
#include <iostream>

void TravelDestination::setName(string Change_Name)
{
    name = Change_Name;
}

void TravelDestination::setCountry(string Change_Country)
{
    country = Change_Country;
}

void TravelDestination::setRating(double Change_Rating)
{
    rating = Change_Rating;
}

string TravelDestination::getName()
{
    return name;
}

string TravelDestination::getCountry()
{
    return country;
}

double TravelDestination::getRating()
{
    return rating;
}

TravelDestination::TravelDestination()
{
    name = "Unknown";
    country = "Unknown";
    rating = 0.0;
    cout << "Default constructor called." << endl;
}

TravelDestination::TravelDestination(string name_TD, string country_TD, double rating_TD)
{
    name = name_TD;
    country = country_TD;
    rating = rating_TD;
    cout << "Parameterized constructor called." << endl;
}

TravelDestination::~TravelDestination()
{
    cout << "Destructor called for " << name << endl;
}
