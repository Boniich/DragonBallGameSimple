#pragma once
#include <iostream>
#include "../../Classes/DerivedClasses/Goku.h"
#include "../../Classes/DerivedClasses/Krillin.h"
#include "../../Classes/DerivedClasses/Gohan.h"

using namespace std;

class View
{
	Goku* _goku = nullptr;
	Krillin* _krillin = nullptr;
	Gohan* _gohan = nullptr;


public:
	View() {
		_goku = new Goku("Goku", "Humano", 100, 200, 15, 10, 50);
		_krillin = new Krillin("Krillin", "Humano", 50, 70, 10, 10, 40);
		_gohan = new Gohan("Gohan", "Humano", 70, 70, 13, 10, 45);
	};
	~View() {
		delete _goku;
		delete _krillin;
		delete _gohan;
	};

	void mainMenu();

private: 

	void pickGoku();
	void pickKrillin();
	void pickGohan();
};
