#include <iostream>
#include <string>
#include "windows.h"

using namespace std;

class Animal {
    string Name;

public:
    static int iter;
    Animal(string name) {
        Name = name;
        iter++;
    }
    string GetName() { return Name; }
};
int Animal::iter = 0;

class Rabbit : public Animal {
public:
    Rabbit(string name) : Animal(name) {}
};

class Chicken: public Animal {
public:
    Chicken(string name) : Animal(name) {}
};

class Farm {
public:
    virtual Chicken* GetChicken() = 0;
    virtual Rabbit* GetRabbit() = 0;
};

class Farm_in_vilagge : public Farm {

    Chicken* GetChicken() { return new Chicken("Дамочка"); }
    Rabbit* GetRabbit() { return new Rabbit("Поганий сусід"); }
};

class Farm_in_city : public Farm {

    Chicken* GetChicken() { return new Chicken("Пєття"); }
    Rabbit* GetRabbit() { return new Rabbit("Пухнастик"); }
};

int main() {
    SetConsoleOutputCP(1251);
    Farm* ChF = new Farm_in_city();
    Chicken* Ch = ChF->GetChicken();
    Farm* RF = new Farm_in_city();
    cout << Ch->GetName() << endl;
    cout << RF->GetRabbit()->iter << endl;
}