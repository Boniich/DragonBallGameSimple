#pragma once
#include "../Character.h"
#include "../../Interfaces/IKamehameha.h"

class Krillin : public Character, IKamehameha
{
public:
	Krillin(string name, string race, int life,
		int levelPower, int attack, int defense, int level) : Character(name, race, life, levelPower, attack, defense, level) {};
	string talk() override;
	int basickAttack() override;
	int kamehameha() override;
	int kienzan();
};

