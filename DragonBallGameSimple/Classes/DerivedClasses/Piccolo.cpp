#include "Piccolo.h"

string Piccolo::talk() {

	return "Hola! Mi nombre es Piccolo";
}

int Piccolo::basickAttack() {
	return _attack;
}

int Piccolo::makankosappo() {
	int techniqueAttack = 50;
	return _attack + techniqueAttack + _levePower;
}