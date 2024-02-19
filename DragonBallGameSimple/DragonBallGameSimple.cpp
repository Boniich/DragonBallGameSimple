#include <iostream>
#include <string>

using namespace std;


class IKamehameha
{
public:
	virtual int kamehameha() = 0;
};


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
	Character(string name, string race, int life, int levelPower,
		int attack, int defense, int level);
	//Al agregar el 0, lo que hacemos es evitar tener que definir la funcion a sobreescribir cuando
	//	no queremos que tenga ningun contenido de inicio
	virtual string talk() = 0;
	virtual int basickAttack() = 0;

protected:
	string showDataCharacter();
};

Character::Character(string name, string race, int life, int levelPower,
	int attack, int defense, int level) {

	_name = name;
	_race = race;
	_life = life;
	_levePower = levelPower;
	_attack = attack;
	_defense = defense;
	_level = level;
}

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

class Goku : public Character, IKamehameha
{

public:
	Goku(string name, string race, int life,
		int levelPower, int attack, int defense, int level);
	string showGokuData();
	string talk() override;
	int basickAttack() override;
	string kaioken();
	int kamehameha() override;
};

Goku::Goku(string name, string race, int life,
	int levelPower, int attack, int defense, int level)
	: Character(name, race, life, levelPower, attack, defense, level) {};


string Goku::showGokuData() {
	return showDataCharacter();
}

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
	return _attack * _levePower;
}





int main()
{
	int option = 0;
	bool exit = false;
	Goku* goku = new Goku("Goku","Humano",100,200,15,10,50);




	do {

		
		cout << "1- Informacion de goku" << endl;
		cout << "2- Hacer a goku a hablar" << endl;
		cout << "3- Kaioken " << endl;
		cout << "4- Kamehameha " << endl;
		cout << "-1 - Salir" << endl;



		cout << "Ingresa una opcion: " << endl;
		cin >> option;

		system("cls");

		switch (option)
		{
		case 1:
			cout << "Los datos de goku son: " << endl;
			cout << goku->showGokuData() << endl;
			break;
		case 2:
			cout << goku->talk() << endl;;
			break;
		case 3:
			cout << goku->kaioken() <<endl;
			break;
		case 4:
			cout << "Ka Me Ha Me Ha Me Ha " << endl;
			cout << "Daño: " << goku->kamehameha() << endl;
			break;
		case -1:
			cout << "Adios!";
			exit = true;
			break;
		default:

			cout << "la opcion no es valida";

			break;
		}

	} while (!exit);



}