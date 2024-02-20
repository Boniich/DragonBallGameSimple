#include "Krillin.h"


string Krillin::talk() {

	return "Hola! Mi nombre es Krillin";
}

int Krillin::basickAttack() {
	return _attack;
}

int Krillin::kamehameha() {
	int techniqueAttack = 50;
	return _attack + techniqueAttack + _levePower;
}

int Krillin::kienzan() {
	int tecnicAttack = 70;
	return _attack + tecnicAttack + _levePower;
}