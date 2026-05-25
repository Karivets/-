/*#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
    std::string tail;
    int paws;
    std::string voice;

public:
    int SetTail(std::string tail_type);
    int SetPaws(int number_of_paws);
    int SetVoice(std::string animal_voice);
    int Say();

protected:
    int CreateAnimal();
};
class Cat : public Animal {
public:
    Cat();
    int Say();
};

class Dog : public Animal {
public:
    Dog();
    int Say();
};

class HighbredCat : public Cat {
protected:
    std::string breed;
public:
    HighbredCat();
    HighbredCat(std::string cats_breed);
    int SetBreed(std::string cats_breed);
};

class HomeCat : public HighbredCat {
    std::string name;
    std::string colour;
public:
    HomeCat(std::string cats_breed, std::string cats_name, std::string color);
    int SetName(std::string cats_name);
    int SetColour(std::string color);
};

#endif
*/