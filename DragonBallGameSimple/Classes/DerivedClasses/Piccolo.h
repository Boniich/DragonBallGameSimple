#pragma once
#include "../Character.h"
#include "../../Interfaces/IMakankosappo.h"

class Character;
class IKamehameha;

class Piccolo : public Character,IMakankosappo
{

public:
	Piccolo(string name, string race, int life,
		int levelPower, int attack, int defense, int level) : Character(name, race, life, levelPower, attack, defense, level) {};
	string talk() override;
	int basickAttack() override;
	int makankosappo() override;
};