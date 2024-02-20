#include "Character.h";


//Character::Character(string name, string race, int life, int levelPower,
//	int attack, int defense, int level) {
//
//	_name = name;
//	_race = race;
//	_life = life;
//	_levePower = levelPower;
//	_attack = attack;
//	_defense = defense;
//	_level = level;
//}


string Character::showDataCharacter() {

	string data = "El nombre es: " + _name + "\n" +
		"La raza es: " + _race + "\n" +
		"Vida: " + to_string(_life) + "\n"
		"Poder de pelea: " + to_string(_levePower) + "\n"
		"Ataque: " + to_string(_attack) + "\n"
		"Defensa: " + to_string(_defense) + "\n"
		"Nivel: " + to_string(_level) + "\n";

	return data;
}
