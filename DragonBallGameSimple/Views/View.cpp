#include "View.h"


void View::pickGoku() {

	bool comeback = false;
	int option = 0;


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
			cout << _goku->showDataCharacter() << endl;
			break;
		case 2:
			cout << _goku->talk() << endl;;
			break;
		case 3:
			cout << _goku->kaioken() << endl;
			break;
		case 4:
			cout << "Ka Me Ha Me Ha Me Ha " << endl;
			cout << "Da�o: " << _goku->kamehameha() << endl;
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
}


void View::pickKrillin() {
	bool comeback = false;
	int option = 0;


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
			cout << _krillin->showDataCharacter() << endl;
			break;
		case 2:
			cout << _krillin->talk() << endl;;
			break;
		case 3:
			cout << "Kienzaaan: " << endl;
			cout << _krillin->kienzan() << endl;
			break;
		case 4:
			cout << "Ka Me Ha Me Ha Me Ha " << endl;
			cout << "Da�o: " << _krillin->kamehameha() << endl;
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

}

void View::pickGohan() {
	bool comeback = false;
	int option = 0;


	do {
		cout << "========= Menu de Gohan ========" << endl;
		cout << "1- Informacion de Gohan" << endl;
		cout << "2- Hacer a Gohan a hablar" << endl;
		cout << "3- Makankosappo " << endl;
		cout << "4- Kamehameha " << endl;
		cout << "0- Salir" << endl;



		cout << "Ingresa una opcion: " << endl;
		cin >> option;

		system("cls");

		switch (option)
		{
		case 1:
			cout << "========= Datos de Gohan ========" << endl;
			cout << _gohan->showDataCharacter() << endl;
			break;
		case 2:
			cout << _gohan->talk() << endl;;
			break;
		case 3:
			cout << "Makankosappoooo: " << endl;
			cout << _gohan->makankosappo() << endl;
			break;
		case 4:
			cout << "Ka Me Ha Me Ha Me Ha " << endl;
			cout << "Da�o: " << _gohan->kamehameha() << endl;
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

}

void View::pickPiccolo() {
	bool comeback = false;
	int option = 0;


	do {
		cout << "========= Menu de Piccolo ========" << endl;
		cout << "1- Informacion de Piccolo" << endl;
		cout << "2- Hacer a Piccolo a hablar" << endl;
		cout << "3- Makankosappo " << endl;
		cout << "0- Salir" << endl;



		cout << "Ingresa una opcion: " << endl;
		cin >> option;

		system("cls");

		switch (option)
		{
		case 1:
			cout << "========= Datos de Piccolo ========" << endl;
			cout << _piccolo->showDataCharacter() << endl;
			break;
		case 2:
			cout << _piccolo->talk() << endl;;
			break;
		case 3:
			cout << "Makankosappoooo: " << endl;
			cout << _piccolo->makankosappo() << endl;
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

}

void View::mainMenu() {
	int option = 0;
	bool exit = false;

	do {

		cout << "Selecciona personaje: " << endl;
		cout << "1- Goku" << endl;
		cout << "2- Krillin" << endl;
		cout << "3- Gohan" << endl;
		cout << "4- Piccolo" << endl;
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
		case 3:
			pickGohan();
			break;
		case 4:
			pickPiccolo();
			break;
		case 0:
			exit = true;
			break;
		default:
			cout << "Opcion invalida! Intentelo de nuevo.";
			break;
		}

	} while (!exit);
}
