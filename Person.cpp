#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(string nom, Point *poz)
{
    this->nom = nom;
    this->poz = poz;
}

void Person::locate()
{
    cout << "Le nom du personne est: "<< nom << " et il se trouve: ";
    poz->display();
    cout << endl;
}


