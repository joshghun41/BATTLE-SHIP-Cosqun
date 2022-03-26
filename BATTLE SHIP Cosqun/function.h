#pragma once
#include<iostream>
#include<conio.h>
#include<Windows.h>
#include"veriable.h"
using namespace std;


void rengideyis(int fg, int bg) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, fg | (bg << 4));
}
void Oyunerazisi(int game_play[s][s], int count) {

	bool isTurn = 0;
	if (game_play == oyun) {
		isTurn = 1;
	}
	else {
		isTurn = 0;
	}
	int number = 0;
	rengideyis(6, 0);
	cout << "                                              Geminin Sayi: " << count << endl;
	rengideyis(0, 0);

	for (size_t i = 0; i < s; i++)
	{

		for (size_t k = 0; k < s; k++)
		{

			if (i == A + 1 && k == A + 1) {
				rengideyis(6, 0);
				cout << "A  ";
			}
			else if (i == B + 1 && k == B + 1) {
				rengideyis(6, 0);
				cout << "B  ";
			}
			else if (i == C + 1 && k == C + 1) {
				rengideyis(6, 0);
				cout << "C  ";
			}
			else if (i == D + 1 && k == D + 1) {
				rengideyis(6, 0);
				cout << "D  ";

			}
			else if (i == E + 1 && k == E + 1) {
				rengideyis(6, 0);
				cout << "E  ";
			}
			else if (i == F + 1 && k == F + 1) {
				rengideyis(6, 0);
				cout << "F  ";
			}
			else if (i == G + 1 && k == G + 1) {
				rengideyis(6, 0);
				cout << "G  ";
			}
			else if (i == H + 1 && k == H + 1) {
				rengideyis(6, 0);
				cout << "H  ";

			}
			else if (i == I + 1 && k == I + 1) {
				rengideyis(6, 0);
				cout << "I  ";
			}
			else if (i == J + 1 && k == J + 1) {
				rengideyis(6, 0);
				cout << "J  ";
			}

		}
		int number = 1;
		for (size_t k = 0; k < s; k++)
		{
			if (i == 0 || i == s - 1) {
				if (number > 10) {
					continue;
				}
				if (number == 1) {
					cout << "  ";
				}
				if (number == 10) {
					cout << "   " << number;
					break;
				}
				cout << "   " << number;
				number++;
			}
			else if (k == 0) {
				rengideyis(6, 0);
				cout << "| ";
			}
			else if (k == s - 1) {
				rengideyis(15, 0);
				cout << "|\n";
			}
			else if (game_play[i][k] == Gemi && isTurn == 0) {

				rengideyis(0, 0);
				cout << char(220) << "   ";
				rengideyis(7, 0);
			}
			else if (game_play[i][k] == Gemi && isTurn == 1) {

				rengideyis(15, 0);
				cout << char(220) << "   ";
				rengideyis(7, 0);
			}
			else if (game_play[i][k] == Vurus) {
				rengideyis(6, 0);
				cout << char(220) << "   ";
				rengideyis(7, 0);
			}
			else if (game_play[i][k] == dagidilmis) {
				rengideyis(4, 0);
				cout << char(220) << "   ";
				rengideyis(7, 0);
			}

			else if (game_play[i][k] == vurulmamis) {
				rengideyis(1, 0);
				cout << char(220) << "   ";
				rengideyis(7, 0);
			}

			else if (isTurn == 1) {
				rengideyis(0, 0);
				cout << char(220) << "   ";
				rengideyis(7, 0);
			}
			else if (isTurn == 0) {
				rengideyis(0, 0);
				cout << char(220) << "   ";
				rengideyis(7, 0);
			}


		}

		cout << endl;
	}cout << endl;;
}
void MENYU() {
	cout << "----------------------------- BATTLE SHIP -----------------\n" << endl;
	cout << "" << endl;
	cout << "--------Gemileri nece yerlesmeyin isdeyirsiniz ??  ---------\n\n";
	cout << "1) Men yerlesdirmek isdeyirem. " << endl;
	cout << "2) Avtomatik yerlesdirilsin .\n " << endl;
}
bool Bosdur(int Y, int X, int number_ship, int no, int game[s][s]) {
	int letter = int(Y) - 65 + 1;

	if (no == assagi) {

		for (size_t i = 0; i < number_ship + 1; i++)
		{
			if (game[letter + i][X - 1] == Gemi || game[letter + i][X + 1] == Gemi ||
				game[letter + i][X] == Gemi || game[letter - 1][X] == Gemi || game[letter - 1][X - 1] == Gemi ||
				game[letter - 1][X + 1] == Gemi) {
				return false;
			}

		}
	}

	else if (no == yuxari) {

		for (size_t i = 0; i < number_ship + 1; i++)
		{
			if (game[letter - i][X - 1] == Gemi || game[letter - i][X + 1] == Gemi ||
				game[letter - i][X] == Gemi || game[letter + 1][X] == Gemi || game[letter + 1][X - 1] == Gemi ||
				game[letter + 1][X + 1] == Gemi) {
				return false;
			}
		}
	}
	else if (no == sol) {

		for (size_t i = 0; i < number_ship + 1; i++)
		{
			if (game[letter - 1][X - i] == Gemi || game[letter + 1][X - i] == Gemi ||
				game[letter][X - i] == Gemi || game[letter][X + 1] == Gemi || game[letter - 1][X + 1] == Gemi ||
				game[letter + 1][X + 1] == Gemi) {
				return false;
			}
		}
	}

	else if (no == sag) {

		for (size_t i = 0; i < number_ship + 1; i++)
		{
			if (game[letter - 1][X + i] == Gemi || game[letter + 1][X + i] == Gemi ||
				game[letter][X + i] == Gemi || game[letter][X - 1] == Gemi || game[letter + 1][X - 1] == Gemi ||
				game[letter - 1][X + 1] == Gemi || game[letter - 1][X - 1] == Gemi) {
				return false;
			}
		}
	}

	return true;

}
void Gemiyerlesdir(int c, char l, int no, int number_ship, int& k, int game[s][s]) {
	int letter = int(l) - 65 + 1;
	if (no == sag) {
		if (c + number_ship <= 11) {
			for (size_t i = 0; i < number_ship; i++)
			{
				game[letter][c] = Gemi;
				c++;
			}
		}
		else {
			k--;
		}
	}
	else if (no == sol) {
		if (c - number_ship >= 0) {
			for (size_t i = 0; i < number_ship; i++)
			{
				game[letter][c] = Gemi;
				c--;
			}
		}
		else {
			k--;
		}
	}

	else if (no == assagi) {
		if (letter + number_ship <= 11) {
			for (size_t i = 0; i < number_ship; i++)
			{
				game[letter][c] = Gemi;
				letter++;
			}
		}
		else {
			k--;
		}
	}
	else if (no == yuxari) {
		if (letter - number_ship >= 0) {

			for (size_t i = 0; i < number_ship; i++)
			{
				game[letter][c] = Gemi;
				letter--;
			}
		}
		else {
			k--;
		}
	}

};
bool Qazanan1(int count1) {
	if (count1 == 0) {
		return true;
	}
	return false;
}
bool Qazanan2(int count1) {
	if (count1 == 0) {
		return true;
	}
	return false;
}
void Vurulmusgemi1(int game[s][s], int game_opponent[s][s], int X, char letter, bool& hasHit) {
	int Y = (int)letter - 65 + 1;

	int count = 0;
	if (game_opponent[Y][X] == Gemi) {
		cout << "\a";
		game_opponent[Y][X] = Vurus;
		hasHit = 1;
		gemisayi1--;
		if (Qazanan1(gemisayi1)) {
			rengideyis(4, 0);
			system("cls");
			cout << "                Oyun Basarili sekilde sonlandi... SEN QAZANDIN !!!      :) !!!" << endl;
			rengideyis(7, 0);
		}


		if (game_opponent[Y + 1][X] == Gemi || game_opponent[Y + 1][X] == Vurus || game_opponent[Y + 1][X] == vurulmamis) {
			for (size_t i = 0; i < 10; i++)
			{

				if (game_opponent[Y + i + 1][X] == 0 || game_opponent[Y + i + 1][X] == vurulmamis) {
					break;
				}
				if (game_opponent[Y + i + 1][X] == Gemi) {
					count++;
				}
			}
		}


		if (game_opponent[Y][X + 1] == Gemi || game_opponent[Y][X + 1] == Vurus || game_opponent[Y][X + 1] == vurulmamis) {
			for (size_t i = 0; i < 10; i++)
			{
				if (game_opponent[Y][X + 1 + i] == 0 || game_opponent[Y][X + 1 + i] == vurulmamis) {
					break;
				}
				if (game_opponent[Y][X + i + 1] == Gemi) {
					count++;
				}
			}
		}

		if (game_opponent[Y - 1][X] == Gemi || game_opponent[Y - 1][X] == Vurus || game_opponent[Y - 1][X] == vurulmamis) {
			for (size_t i = 0; i < 10; i++)
			{
				if (game_opponent[Y - 1 - i][X] == 0 || game_opponent[Y - 1 - i][X] == vurulmamis) {
					break;
				}
				if (game_opponent[Y - i - 1][X] == Gemi) {
					count++;
				}
			}
		}


		if (game_opponent[Y][X - 1] == Gemi || game_opponent[Y][X - 1] == Vurus || game_opponent[Y][X - 1] == vurulmamis) {
			for (size_t i = 0; i < 10; i++)
			{
				if (game_opponent[Y][X - 1 - i] == 0 || game[Y][X - 1 - i] == vurulmamis) {
					break;
				}
				if (game_opponent[Y][X - i - 1] == Gemi) {
					count++;
				}
			}
		}
		if (count == 0) {
			cout << "                         GEMİlerin  Partladildi ";
			Beep(600, 555);    
			cin.get(); 
			int j = 0;
			while (true) {
				bool isFalse = 0;

				if (game_opponent[Y + j][X] == Vurus) {
					if (game_opponent[Y + j][X] == 0 || game_opponent[Y + j][X] == vurulmamis) {
						break;
					}
					isFalse = 1;
					game_opponent[Y + j][X] = dagidilmis;
				}
				if (game_opponent[Y - j][X] == Vurus) {
					if (game_opponent[Y - j][X] == 0 || game_opponent[Y - j][X] == vurulmamis) {
						break;
					}
					isFalse = 1;
					game_opponent[Y - j][X] = dagidilmis;
				}
				if (game_opponent[Y][X + j] == Vurus) {
					if (game_opponent[Y][X + j] == 0 || game_opponent[Y][X + j] == vurulmamis) {
						break;
					}
					isFalse = 1;
					game_opponent[Y][X + j] = dagidilmis;
				}
				if (game_opponent[Y][X - j] == Vurus) {
					if (game_opponent[Y][X - j] == 0 || game_opponent[Y][X - j] == vurulmamis) {
						break;
					}
					isFalse = 1;
					game_opponent[Y][X - j] = dagidilmis;
				}

				if (isFalse == 0) {
					break;
				}
				j++;
			}
			system("pause");
		}
	}
	else {
		game_opponent[Y][X] = vurulmamis;
		hasHit = 0;
	}



}
void Vurulmusgemi2(int game[s][s], int game_opponent[s][s], bool& hasHit_rival) {
	srand(time(0));
	int count = 0;
	while (true) {
		bool isFalse = 0;
		
		 

			int random_x = 1 + rand() % (11 - 1);
			int random_y = 1 + rand() % (11 - 1);

			Y = random_y;
			X = random_x;
		

		
			

		if (game[Y][X] != Vurus && game[Y][X] != vurulmamis && game[Y][X] != dagidilmis) {


			if (game[Y][X] == Gemi) {
				cout << "\a";
				game[Y][X] = Vurus;
				
				hasHit_rival = 1;
				gemisayi2--;
				if (Qazanan2(gemisayi2)) {
					rengideyis(4, 0);
					cout << "                Uduzdunuz  butun gemileriniz batdi :( !!!" << endl;
					rengideyis(7, 0);
				}

				if (game[Y + 1][X] == Gemi || game[Y + 1][X] == Vurus || game[Y + 1][X] == vurulmamis) {
					for (size_t i = 0; i < 10; i++)
					{

						if (game[Y + i + 1][X] == 0 || game[Y + i + 1][X] == vurulmamis) {
							break;
						}
						if (game[Y + i + 1][X] == Gemi) {
							count++;
						}
					}
				}


				if (game[Y][X + 1] == Gemi || game[Y][X + 1] == Vurus || game[Y][X + 1] == vurulmamis) {
					for (size_t i = 0; i < 10; i++)
					{
						if (game[Y][X + 1 + i] == 0 || game[Y][X + 1 + i] == vurulmamis) {
							break;
						}
						if (game[Y][X + i + 1] == Gemi) {
							count++;
						}
					}
				}

				if (game[Y - 1][X] == Gemi || game[Y - 1][X] == Vurus || game[Y - 1][X] == vurulmamis) {
					for (size_t i = 0; i < 10; i++)
					{
						if (game[Y - 1 - i][X] == 0 || game[Y - 1 - i][X] == vurulmamis) {
							break;
						}
						if (game[Y - i - 1][X] == Gemi) {
							count++;
						}
					}
				}


				if (game[Y][X - 1] == Gemi || game[Y][X - 1] == Vurus || game[Y][X - 1] == vurulmamis) {
					for (size_t i = 0; i < 10; i++)
					{
						if (game[Y][X - 1 - i] == 0 || game[Y][X - 1 - i] == vurulmamis) {
							break;
						}
						if (game[Y][X - i - 1] == Gemi) {
							count++;
						}
					}
				}
				cout << count;
				if (count == 0) {
					

					cout << "                        YESSSS :) GEmi partladildi !!! ";
					//Beep(600, 555);  
					//cin.get(); 
					cout << "\a";
					system("pause");
					int j = 0;
					while (true) {
						bool isFalse = 0;

						if (game[Y + j][X] == Vurus) {
							if (game[Y + j][X] == 0 || game[Y + j][X] == vurulmamis) {
								break;
							}
							isFalse = 1;
							game[Y + j][X] = dagidilmis;
						}
						if (game[Y - j][X] == Vurus) {
							if (game[Y - j][X] == 0 || game[Y - j][X] == vurulmamis) {
								break;
							}
							isFalse = 1;
							game[Y - j][X] = dagidilmis;
						}
						if (game[Y][X + j] == Vurus) {
							if (game[Y][X + j] == 0 || game[Y][X + j] == vurulmamis) {
								break;
							}
							isFalse = 1;
							game[Y][X + j] = dagidilmis;
						}
						if (game[Y][X - j] == Vurus) {
							if (game[Y][X - j] == 0 || game[Y][X - j] == vurulmamis) {
								break;
							}
							isFalse = 1;
							game[Y][X - j] = dagidilmis;
						}

						if (isFalse == 0) {
							break;
						}
						j++;
					}
				}


				break;
			}
			else {
				game[Y][X] = vurulmamis;
				
				hasHit_rival = 0;
				break;
			}
		}
		else {
			continue;
		}
	}

}
void Basla() {

	while (true) {

		while (true) {
			Sleep(1000);
			system("cls");
			Oyunerazisi(oyun, gemisayi2);
			Oyunerazisi(oyun_reqib, gemisayi1);

			int cordination = 0;
			rengideyis(6, 0);
			cout << "Kordinasiya reqemini daxil edin : ";
			cin >> cordination;

			char letter = 0;
			rengideyis(7, 0);
			cout << "Kordinasiya herifini daxil edin : ";
			cin >> letter;

			Vurulmusgemi1(oyun, oyun_reqib, cordination, letter, vurulub);
			if (vurulub == 1) {
				continue;
			}
			else {
				break;
			}

		}
		while (true) {
			Sleep(1200);
			system("cls");
			Oyunerazisi(oyun, gemisayi2);
			Oyunerazisi(oyun_reqib, gemisayi1);
			Vurulmusgemi2(oyun, oyun_reqib, vurulub_reqib);
			if (vurulub_reqib == 1) {
				continue;
			}
			else {
				break;
			}

		}
	}
}