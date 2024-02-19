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
	string talk() override;
	int basickAttack() override;
	string kaioken();
	int kamehameha() override;
};

Goku::Goku(string name, string race, int life,
	int levelPower, int attack, int defense, int level)
	: Character(name, race, life, levelPower, attack, defense, level) {};


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

string Krillin::talk() {

	return "Hola! Mi nombre es Krillin";
}

int Krillin::basickAttack() {
	return _attack;
}

int Krillin::kamehameha() {
	double techniqueAttack = 2;
	return _attack * _levePower * techniqueAttack;
}

int Krillin::kienzan() {
	double tecnicAttack = 1.5;
	return _attack * tecnicAttack * _levePower;
}

void pickGoku() {

	bool comeback = false;
	int option = 0;
	Goku* goku = new Goku("Goku", "Humano", 100, 200, 15, 10, 50);


	do {
		cout << "========= Menu de Goku ========" << endl;
		cout << "1- Informacion de goku" << endl;
		cout << "2- Hacer a goku a hablar" << endl;
		cout << "3- Kaioken " << endl;
		cout << "4- Kamehameha " << endl;
		cout << "0- Salir" << endl;



		cout << "Ingresa una opcion: " << endl;
		cin >> option;

		system("cls");

		switch (option)
		{
		case 1:
			cout << "========= Datos de Goku ========" << endl;
			cout << goku->showDataCharacter() << endl;
			break;
		case 2:
			cout << goku->talk() << endl;;
			break;
		case 3:
			cout << goku->kaioken() << endl;
			break;
		case 4:
			cout << "Ka Me Ha Me Ha Me Ha " << endl;
			cout << "Daño: " << goku->kamehameha() << endl;
			break;
		case 0:
			comeback = true;
			system("cls");
			break;
		default:

			cout << "la opcion no es valida";

			break;
		}
	} while (!comeback);

	
	delete goku;
}

void pickKrillin() {
	bool comeback = false;
	int option = 0;
	Krillin* krillin = new Krillin("Krillin", "Humano", 50, 70, 10, 10, 40);


	do {
		cout << "========= Menu de Krillin ========" << endl;
		cout << "1- Informacion de Krillin" << endl;
		cout << "2- Hacer a Krillin a hablar" << endl;
		cout << "3- Kienzan " << endl;
		cout << "4- Kamehameha " << endl;
		cout << "0- Salir" << endl;



		cout << "Ingresa una opcion: " << endl;
		cin >> option;

		system("cls");

		switch (option)
		{
		case 1:
			cout << "========= Datos de Krillin ========" << endl;
			cout << krillin->showDataCharacter() << endl;
			break;
		case 2:
			cout << krillin->talk() << endl;;
			break;
		case 3:
			cout << "Kienzaaan: " << endl;
			cout << krillin->kienzan() << endl;
			break;
		case 4:
			cout << "Ka Me Ha Me Ha Me Ha " << endl;
			cout << "Daño: " << krillin->kamehameha() << endl;
			break;
		case 0:
			comeback = true;
			system("cls");
			break;
		default:

			cout << "la opcion no es valida";

			break;
		}
	} while (!comeback);


	delete krillin;
}



int main()
{
	int option = 0;
	bool exit = false;
	
	do {

		cout << "Selecciona personaje: " << endl;
		cout << "1- Goku" << endl;
		cout << "2- Krillin" << endl;
		cout << "0- Exit" << endl;

		cout << "Ingresa una opcion: " << endl;
		cin >> option;

		system("cls");


		switch (option)
		{
		case 1:
			pickGoku();
			break;
		case 2: 
			pickKrillin();
			break;
		case 0:
			exit = true;
		default:
			cout << "Opcion invalida! Intentelo de nuevo.";
			break;
		}

	} while (!exit);
}