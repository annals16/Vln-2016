#ifndef LISTSERVICES_H
#define LISTSERVICES_H
#include "scientistList.h"
#include <vector>



class listServices
{
public:
    listServices();
 void   sortByName();
 void   sortByBirth();
 void   sortByAlive();
 void   sortByAward();
 void   addNew(string firstName, string lastName, char gender, int birthYear, int deathYear, int awardYear);

 vector<list> searchLastName(string lastName);
 vector<list>   searchBirth(int birthYear);
 vector<list>   searchAlive(int deathYear);
 vector<list>   searchAward(int awardYear);


private:

    vector<list> _turingAwardWinners;

};

#endif // LISTSERVICES_H
