#include <iostream>
#include "../h/Person.h"

using namespace std;

Person::Person(string name, Point *location)
{
    this->name = name;
    this->poz = location;
}

void Person::locate()
{
    cout << "Le name du personne est: "<< name << " et il se trouve: ";
    poz->display();
    cout << endl;
}


