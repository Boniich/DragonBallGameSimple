#pragma once
#include <iostream>
#include "../../Classes/DerivedClasses/Goku.h"
#include "../../Classes/DerivedClasses/Krillin.h"

using namespace std;

class View
{
	Goku* _goku = nullptr;
	Krillin* _krillin = nullptr;


public:
	View() {
		_goku = new Goku("Goku", "Humano", 100, 200, 15, 10, 50);
		_krillin = new Krillin("Krillin", "Humano", 50, 70, 10, 10, 40);
	};
	~View() {
		delete _goku;
		delete _krillin;
	};

	void mainMenu();

private: 

	void pickGoku();
	void pickKrillin();
};
