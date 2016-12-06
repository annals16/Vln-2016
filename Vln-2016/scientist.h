#ifndef SCIENTIST_H
#define SCIENTIST_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Scientist
{
    string _firstName;
    string _lastName;
    string _nationality;
    int _birthYear;
    int _deathYear;
    char _sex;
    int _awardYear;

public:
    string firstName;
    string lastName;
    string nationality;
    int birthYear;
    int deathYear;
    char sex;
    int awardYear;

    Scientist();
    Scientist(string fName, string lName, string nationality, int bYear, int dYear, char gender, int aYear);
    void readFile(vector<Scientist>& scientists);
    string getFirstName();
    string getLastName();
    string getNationality();
    int getBirthYear();
    int getDeathYear();
    char getGender();
    int getAwardYear();


};

#endif // SCIENTIST_H