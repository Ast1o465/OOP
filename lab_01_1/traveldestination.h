#ifndef TRAVELDESTINATION_H
#define TRAVELDESTINATION_H

using namespace std;
#include <string>

class TravelDestination
{
public:
    TravelDestination();
    TravelDestination(string name, string country, double rating);
    ~TravelDestination();

    void setName(string Change_Name);
    void setCountry(string Change_Country);
    void setRating(double Change_Rating);

    string getName();
    string getCountry();
    double getRating();

private:
    string name;
    string country;
    double rating;
};

#endif // TRAVELDESTINATION_H
