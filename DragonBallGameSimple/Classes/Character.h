#pragma once
#include <string>

using namespace std;

class Character {
protected:
	string _name;
	string _race;
	int _life;
	int _levePower;
	int _attack;
	int _defense;
	int _level;
public:
	Character(string name, string race, int life, int levelPower, int attack, int defense, int level) 
		: _name(name), _race(race), _life(life), _levePower(levelPower), _attack(attack), _defense(defense), _level(level){};
			//Character(string name, string race, int life, int levelPower,
			//int attack, int defense, int level);
	virtual string talk() = 0;
	virtual int basickAttack() = 0;
	string showDataCharacter();
};
