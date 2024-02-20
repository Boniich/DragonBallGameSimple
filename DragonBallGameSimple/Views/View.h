#pragma once
#include <iostream>
#include "../../Classes/DerivedClasses/Goku.h"
#include "../../Classes/DerivedClasses/Krillin.h"
#include "../../Classes/DerivedClasses/Gohan.h"
#include "../../Classes/DerivedClasses/Piccolo.h"

using namespace std;

class View
{
	Goku* _goku = nullptr;
	Krillin* _krillin = nullptr;
	Gohan* _gohan = nullptr;
	Piccolo* _piccolo = nullptr;


public:
	View() {
		_goku = new Goku("Goku", "Humano", 100, 200, 15, 10, 50);
		_krillin = new Krillin("Krillin", "Humano", 50, 70, 10, 10, 40);
		_gohan = new Gohan("Gohan", "Humano", 70, 70, 13, 10, 45);
		_piccolo = new Piccolo("Piccolo", "Namek", 100, 80, 14, 12, 48);
	};
	~View() {
		delete _goku;
		delete _krillin;
		delete _gohan;
		delete _piccolo;
	};

	void mainMenu();

private: 

	void pickGoku();
	void pickKrillin();
	void pickPiccolo();
	void pickGohan();
};
