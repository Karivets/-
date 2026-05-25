#include <string>
#include <iostream>
#include <exception>
#include "windows.h"
using namespace std;

/*
class PhoneException : public exception
{
	string e;
public:
	PhoneException(string message) : e(message) {}
	const char* what() { return e.c_str(); }
};

class Model {
public:
	int Phone(int model) {
		switch (model) {
		case 1:return 200;
		case 2:return 230;
		case 3:return 270;
		default :
			throw PhoneException("¬вед≥ть модель телефону в д≥апазон≥ [1;3]");
		}
	}
};

class Price {
public:
	int BuyMorePhone(int kilkist,int price) {
		return kilkist * price;
	}
};

class Cover {
public:
	int _cover(int model) {
		switch (model) {
		case 1:return 100;
		case 2:return 115;
		case 3:return 135;
		default:
			throw PhoneException("¬вед≥ть модель телефону в д≥апазон≥ [1;3]");
		}
	}
};

class PhoneFacade
{
private:
	Model* _PhoneModel;
	Price* _PhonePrice;
	Cover* _PhoneCover;


public: int PhoneRest(int model, int kilkist )
{
	int price = _PhoneModel->Phone(model);
	int PhoneModel = _PhoneModel->Phone(model);
	int PhonePrice = _PhonePrice->BuyMorePhone(kilkist,price);
	int PhoneCover = _PhoneCover->_cover(model);

	return PhoneModel + PhonePrice + PhoneCover;
};
	  PhoneFacade()
	  {
		  _PhoneModel = new Model();
		  _PhonePrice = new Price();
		  _PhoneCover = new Cover();
	  };
};

int main()
{
	PhoneFacade* phoneFacade = new PhoneFacade();
	try {
		int PhoneBestPrice = phoneFacade->PhoneRest(1,3);
		cout << "Price: " << PhoneBestPrice;
	}
	catch (PhoneException& e) {
		cout << e.what();
	}
	return 0;
}
*/