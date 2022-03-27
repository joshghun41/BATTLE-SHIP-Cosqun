#include<iostream>
#include<conio.h>
#include<Windows.h>
#include"function.h"
#include"veriable.h"
using namespace std;
void main() {
	system("cls");
	rengideyis(6, 0);
	MENYU();
	int select = 0;
	cout << "Secim edin (1)/(2): ";
	cin >> select;

	

	if (select == 1) {

		while (Gemininolcusu < 5) {

			for (int k = 0; k < sayi1; k++)
			{
				system("cls");
				Oyunerazisi(oyun, gemisayi2);

				cout  << Gemininolcusu << " -lu  GEMI  " << endl;

				int cordination = 0;
				cout << "Kordinasyani  daxil edin: ";
				cin >> cordination;


				char letter = ' ';
				cout << " ";
				cin >> letter;

				char direction = _getch();
				direction = _getch();
				int no = direction;
				if (Bosdur(letter, cordination, Gemininolcusu, no, oyun)) {

					Gemiyerlesdir(cordination, letter, direction, Gemininolcusu, k, oyun);
				}
				else {
					k--;
					cout << "YENIDEN YOXLAYIN " << endl;
					system("pause");
					continue;
				}

			}
			sayi1++;
			Gemininolcusu--;

			if (Gemininolcusu == 0) {
				break;
			}
		}

		srand(time(0));
		int random_x = 0;
		char random_letter_rival = 0;

		while (Gemininolcusu3 != 0) {
			for (int j = 0; j < sayi3; j++)
			{

				random_x = 1 + rand() % (11 - 1);

				random_letter_rival = 65 + rand() % (74 - 65);
				X_1 = random_x;

				int arr[4] = { yuxari,assagi,sol,sag };
				int random_rival = 0 + rand() % (3 - 0);
				int random_no_rival = arr[random_rival];

				if (Bosdur(random_letter_rival, X_1, Gemininolcusu3, random_no_rival, oyun_reqib)) {

					Gemiyerlesdir(X_1, random_letter_rival, random_no_rival, Gemininolcusu3, j, oyun_reqib);
				}
				else {
					j--;
					continue;
				}
			}
			sayi3++;
			Gemininolcusu3--;
			if (Gemininolcusu3 == 0) {
				break;
			}
		}

	}
	else if (select == 2) {
		system("pause");
		Oyunerazisi(oyun, gemisayi2);


		srand(time(0));
		int random_x = 0;
		int random_y = 0;
		char random_letter = 0;

		while (Gemininolcusu != 0) {
			for (int k = 0; k < sayi2; k++)
			{
				system("cls");
				Oyunerazisi(oyun, gemisayi2);
				random_x = 1 + rand() % (11 - 1);

				random_letter = 65 + rand() % (74 - 65);
				X_2 = random_x;

				int arr[4] = { yuxari,assagi,sol,sag };
				int random = 0 + rand() % (3 - 0);
				int random_no = arr[random];

				if (Bosdur(random_letter, X_2, Gemininolcusu2, random_no, oyun)) {

					Gemiyerlesdir(X_2, random_letter, random_no, Gemininolcusu2, k, oyun);
				}
				else {
					k--;
					continue;
				}
			}
			sayi2++;
			Gemininolcusu2--;
			if (Gemininolcusu2 == 0) {
				system("cls");
				Oyunerazisi(oyun, gemisayi2);
				break;
			}
		}

	}
	else {
		cout << "Duzgun daxil edin  !" << endl;
	}

	// OPPONENT AREA
	srand(time(0));
	int random_x_rival = 0;
	char random_letter_rival = 0;

	while (Gemininolcusu3 != 0) {
		for (int j = 0; j < sayi3; j++)
		{

			random_x_rival = 1 + rand() % (11 - 1);

			random_letter_rival = 65 + rand() % (74 - 65);
			X_1 = random_x_rival;

			int arr[4] = { yuxari,assagi,sol,sag };
			int random_rival = 0 + rand() % (3 - 0);
			int random_no_rival = arr[random_rival];

			if (Bosdur(random_letter_rival, X_1, Gemininolcusu3, random_no_rival, oyun_reqib)) {

				Gemiyerlesdir(X_1, random_letter_rival, random_no_rival, Gemininolcusu3, j, oyun_reqib);
			}
			else {
				j--;
				continue;
			}
		}
		sayi3++;
		Gemininolcusu3--;
		if (Gemininolcusu3 == 0) {
			break;
		}
	}
	system("cls");
	Oyunerazisi(oyun, gemisayi2);
	Oyunerazisi(oyun_reqib, gemisayi1);

	int option = 0;
	if (option == 0) {

		Basla();
	}
	else { 
		system("cls");
		cout << "\n\n\n\n\n\n\n\n                     --------------- Oyun  Isdifadeci   Terefinden  Sonlandirildi ---------------\n\n\n\n\n\n\n\n\n\n\n\n\n";
	
	}
}