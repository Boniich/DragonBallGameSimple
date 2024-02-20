#pragma once
#include "../Character.h"
#include "../../Interfaces/IKamehameha.h"

class Character;
class IKamehameha;

class Goku : public Character, IKamehameha
{

public:
	Goku(string name, string race, int life,
		int levelPower, int attack, int defense, int level) : Character(name, race, life, levelPower, attack, defense, level) {};
	string talk() override;
	int basickAttack() override;
	string kaioken();
	int kamehameha() override;
};

