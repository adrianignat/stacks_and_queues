#ifndef STACKS_AND_QUEUES_PERSON_H
#define STACKS_AND_QUEUES_PERSON_H

#include <string>
#include "Point.h"

using namespace std;

class Person {
public:
    string nom;
    Point *poz;
    Person(string nom, Point *poz);
    void locate();

};


#endif //STACKS_AND_QUEUES_PERSON_H
