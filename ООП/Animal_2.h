#pragma once
#ifndef ANIMAL_2_H
#define ANIMAL_2_H

#include <iostream>
#include <string>
using namespace std;
class Animal {
    string tail;
    int paws;
    string voice;

public:
    int SetTail(string tail_type);
    int SetPaws(int number_of_paws);
    int SetVoice(string animal_voice);
    int Say();

protected:
    int CreateAnimal();
};



class Bird :public Animal {
public:
    Bird();
};

class Puhnasti :public Animal {
public:
    Puhnasti();
};

class Rabbit : public Puhnasti {
public:
    Rabbit();
    int Say();
};

class Kyrka : public Bird {
public:
    Kyrka();
    int Say();
};

class PorodustuiRabbit : public Rabbit {
protected:
    string poroda;
public:
    PorodustuiRabbit();
    PorodustuiRabbit(string rabbit_breed);
    int SetBreed(string rabbit_breed);
};

class HomeRabbit : public PorodustuiRabbit {
    string name;
    string colour;
public:
    HomeRabbit(string rabbit_breed, string rabbit_name, string color);
    int SetName(string rabbit_name);
    int SetColour(string color);
};

#endif