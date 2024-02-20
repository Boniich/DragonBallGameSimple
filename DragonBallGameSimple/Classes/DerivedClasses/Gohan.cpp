#include "Gohan.h"

string Gohan::talk() {

	return "Hola! Mi nombre es Gohan";
}

int Gohan::basickAttack() {
	return _attack;
}

int Gohan::kamehameha() {
	int techniqueAttack = 80;
	return _attack + techniqueAttack + _levePower;
}

int Gohan::makankosappo() {
	int techniqueAttack = 50;
	return _attack + techniqueAttack + _levePower;
}