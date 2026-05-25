#include <iostream>
#include"windows.h"

using namespace std;
/*
class Beast
{
	string body;
	string head;
	string* paws;
	int number_of_paws;
	void build() {
		cout << "Створено:\n" << body << "\n" << head << "\nлапи \n";
		for (int i = 0; i < number_of_paws; ++i)  cout << paws[i] << "\n";
	};

	void destroy() {
		cout << "Знищено:\n" << body << "\n" << head << "\nлапи \n";
		for (int i = 0; i < number_of_paws; ++i)  cout << paws[i] << "\n";
	};

public:
	Beast() {
		body = "тіло";
		head = "голова";
		number_of_paws = 4;
		paws = new string[number_of_paws];
		paws[0] = "передня права";
		paws[1] = "передня ліва";
		paws[2] = "задня права";
		paws[3] = "задня ліва";
		build();
	};
	~Beast() {
		destroy();
		delete[] paws;
	};
};

class TailedBeast : virtual  public Beast {
	string hvist;
public:
	TailedBeast() {
		hvist = "хвіст";
		cout << "добавлено " << hvist << "\n";
	};
	~TailedBeast() {
		cout << "видалено " << hvist << "\n";

	};
};

class SkinnedBeast : virtual public Beast {
	string skin;
public:
	SkinnedBeast() {
		skin = "шкіра";
		cout << "добавлено " << skin << "\n";
	};

	~SkinnedBeast() {
		cout << "видалено " << skin << "\n";
	};
};

class Krill : TailedBeast, SkinnedBeast {
public:
	Krill() {
		cout << "добавлено вушка\nУ нас є Поганий сусід!\n\n";
	}
	~Krill() {
		cout << "Знищення признаків кроля:\n";
	}
};

int main() {
	SetConsoleOutputCP(1251);
	Krill beast;
cout << "Кріль живе: хрум-хрум!)\n\n";
}
*/