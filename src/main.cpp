#include <iostream>
#include "../h/Person.h"

using namespace std;

int main() {
    Point *location = new Point(3, 5);
    Person *person = new Person("Zavoianu Alexandru", location);

    person->locate();

    person->poz->setX(7);
    person->poz->setY(6);

    person->locate();

    return 0;
}