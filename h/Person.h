#ifndef STACKS_AND_QUEUES_PERSON_H
#define STACKS_AND_QUEUES_PERSON_H

#include <string>
#include "Point.h"

using namespace std;

class Person {
public:
    string name;
    Point *poz;
    Person(string name, Point *location);
    void locate();

};


#endif //STACKS_AND_QUEUES_PERSON_H
