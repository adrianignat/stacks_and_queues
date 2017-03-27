#include <iostream>
#include "Person.h"

using namespace std;

int main() {
    Point *l1 = new Point(3, 5);
    Person *P1 = new Person("Zavoianu Alexandru", l1);
//    Person P2 = new Person("Neagu Cristian", 1, 5);
//    Person P3 = new Person("Dumitrescu Maria", 3, 4);
//    Person P4 = new Person("Steaua Margareta", 2, 3);

    P1->locate();
//    P2.locate();
//    P3.locate();
//    P4.locate();

    P1->poz->setX(7);
    P1->poz->setY(6);

    P1->locate();

    return 0;
}