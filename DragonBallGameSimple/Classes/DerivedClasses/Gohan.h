#pragma once
#include "../Character.h"
#include "../../Interfaces/IKamehameha.h"
#include "../../Interfaces/IMakankosappo.h"

class Character;
class IKamehameha;

class Gohan : public Character, IKamehameha, IMakankosappo
{

public:
	Gohan(string name, string race, int life,
		int levelPower, int attack, int defense, int level) : Character(name, race, life, levelPower, attack, defense, level) {};
	string talk() override;
	int basickAttack() override;
	string kaioken();
	int kamehameha() override;
	int makankosappo() override;
};