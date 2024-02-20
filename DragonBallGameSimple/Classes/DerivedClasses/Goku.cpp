#include "Goku.h"

//Goku::Goku(string name, string race, int life,
//	int levelPower, int attack, int defense, int level)
//	: Character(name, race, life, levelPower, attack, defense, level) {};

string Goku::kaioken() {
	return "Kaiokeeen";
}

string Goku::talk() {

	return "Hola! Mi nombre es Goku";
}

int Goku::basickAttack() {
	return _attack;
}

int Goku::kamehameha() {
	int techniqueAttack = 80;
	return _attack + techniqueAttack + _levePower;
}