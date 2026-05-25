#include "Animal.h"
/*
int Animal::SetTail(std::string tail_type) { tail = tail_type; return 1; }
int Animal::SetPaws(int number_of_paws) { paws = number_of_paws; return 1; }
int Animal::SetVoice(std::string animal_voice) { voice = animal_voice; return 1; }
int Animal::Say() { std::cout << "иофтдфд"; return 1; }
int Animal::CreateAnimal() {
    std::cout << "Має " << paws << " лапи та " << tail << ". \nГоворить " << voice << " голосом: ";
    return 1;
}

Cat::Cat() {
    SetPaws(4);
    SetTail("хвіст");
    SetVoice("няшним");
    CreateAnimal();
    Say();
}
int Cat::Say() { std::cout << "М-р-р-р... Мяу-мяу"; return 1; }

Dog::Dog() {
    SetPaws(4);
    SetTail("обкусаний хвіст");
    SetVoice("грубим");
    CreateAnimal();
    Say();
}
int Dog::Say() { std::cout << "Гав... Гррр-р-гав"; return 1; }

HighbredCat::HighbredCat() {}
HighbredCat::HighbredCat(std::string cats_breed) {
    SetBreed(cats_breed);
    std::cout << "\nПорода кота " << breed;
}
int HighbredCat::SetBreed(std::string cats_breed) { breed = cats_breed; return 1; }

HomeCat::HomeCat(std::string cats_breed, std::string cats_name, std::string color) {
    SetBreed(cats_breed);
    SetColour(color);
    SetName(cats_name);
    std::cout << "\nТо " << colour << " кіт " << breed << ". Відкликається, коли кличиш " << name << std::endl;
}
int HomeCat::SetName(std::string cats_name) { name = cats_name; return 1; }
int HomeCat::SetColour(std::string color) { colour = color; return 1; }
*/