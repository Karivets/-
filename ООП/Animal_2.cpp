#include "Animal_2.h"
using namespace std;
int Animal::SetTail(string tail_type) { tail = tail_type; return 1; }
int Animal::SetPaws(int number_of_paws) { paws = number_of_paws; return 1; }
int Animal::SetVoice(string animal_voice) { voice = animal_voice; return 1; }
int Animal::Say() { cout << "..."; return 1; }

int Animal::CreateAnimal() {
    cout << "Має " << paws << " лапи та " << tail << ". \nВидає " << voice << " звук: ";
    return 1;
}

Rabbit::Rabbit() {
    SetPaws(4);
    SetTail("маленький пухнастий хвостик");
    SetVoice("тихий");
    CreateAnimal();
    Say();
}
int Rabbit::Say() { cout << "Хрум-хрум (хрумає ячмінь)"; return 1; }

Kyrka::Kyrka() {
    SetPaws(2);
    SetTail("пір'яний хвіст");
    SetVoice("гучний");
    CreateAnimal();
    Say();
}
int Kyrka::Say() { cout << "Ко-ко-ко! Куд-кудах!"; return 1; }

Bird::Bird() {
    cout << "Птах"<<endl;
}
Puhnasti::Puhnasti() {
    cout << "Тварини з пухом"<<endl;
}
PorodustuiRabbit::PorodustuiRabbit() {}
PorodustuiRabbit::PorodustuiRabbit(string rabbit_breed) {
    SetBreed(rabbit_breed);
    std::cout << "\nПорода кроля: " << poroda;
}
int PorodustuiRabbit::SetBreed(string rabbit_breed) { poroda = rabbit_breed; return 1; }

HomeRabbit::HomeRabbit(string rabbit_breed, string rabbit_name, string color) {
    SetBreed(rabbit_breed);
    SetColour(color);
    SetName(rabbit_name);
    cout << "\nЦе " << colour << " кріль породи " << poroda << ". Відкликається на ім'я " << name << endl;
}
int HomeRabbit::SetName(string rabbit_name) { name = rabbit_name; return 1; }
int HomeRabbit::SetColour(string color) { colour = color; return 1; }