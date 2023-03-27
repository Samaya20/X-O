#include <iostream>;
#include <windows.h>;
using namespace std;


//Player 1 qazanibsa isleyecek olan cout funksiyasi
void player1Cout() {
	cout << "\n\n\n\t\t\t\t _____________________" << endl;
	cout << "\t\t\t\t      |                     | " << endl;
	cout << "\t\t\t\t      |   Player<1> Wins!   |" << endl;
	cout << "\t\t\t\t      |_____________________|\n\n\n " << endl;
}


//Player 2 qazanibsa isleyecek olan cout funksiyasi
void player2Cout() {
	cout << "\n\n\n\t\t\t\t _____________________ " << endl;
	cout << "\t\t\t\t      |                     | " << endl;
	cout << "\t\t\t\t      |   Player<2> Wins!   |" << endl;
	cout << "\t\t\t\t      |_____________________|\n\n\n " << endl;
}

//Secim ucun nomreler
char bt1 = '1', bt2 = '2', bt3 = '3', bt4 = '4', bt5 = '5', bt6 = '6', bt7 = '7', bt8 = '8', bt9 = '9';

//Board
void XOSelect(char bt1, char bt2, char bt3, char bt4, char bt5, char bt6, char bt7, char bt8, char bt9) {
	cout << "\n\n\t\t\t\t\t   TiC TAC TOE\n\n";
	cout << "\t\t\t\t  Player 1 (X)  -  Player 2 (O)" << endl << endl;

	cout << endl;
	cout << "        \t\t\t\t  " << bt1 << "  |  " << bt2 << "  |  " << bt3 << endl;
	cout << "        \t\t\t\t  ___|_____|___" << endl;
	cout << "        \t\t\t\t  " << bt4 << "  |  " << bt5 << "  |  " << bt6 << endl;
	cout << "        \t\t\t\t  ___|_____|___" << endl;
	cout << "        \t\t\t\t  " << bt7 << "  |  " << bt8 << "  |  " << bt9 << endl;
	cout << "        \t\t\t\t     |     |     " << endl << endl;
}



void main() {

	//Boardi ekrana cixarmaq
	XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);

	//Secimler
	int num = 0;

	while (num < 5) {
		bool flag = true;

		//Oyuncu 1-in secimlerini yoxlamaq

		while (flag) {
			cout << "Oyuncu 1, sira sende! Hansi reqemli yeri secirsen ? " << endl;
			int player2 = 0;
			cin >> player2;
			Sleep(500);
			system("cls");

			switch (player2)
			{
			case 1: {
				if (bt1 == '1') {
					bt1 = 'X';
					flag = false;
				}
				else {
					cout << "\n\n\t\t\t\tERROR : Sehv secim! 1-ci xana bos deyil :/\n\n\n" << endl;
					Sleep(4000);
					system("cls");
					XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
				}
				break;
			}
			case 2: {
				if (bt2 == '2') {
					bt2 = 'X';
					flag = false;
				}
				else {
					cout << "\n\n\t\t\t\tERROR : Sehv secim! 2-ci xana bos deyil :/\n\n\n" << endl;
					Sleep(4000);
					system("cls");
					XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
				}
				break;
			}
			case 3: {
				if (bt3 == '3') {
					bt3 = 'X';
					flag = false;
				}
				else {
					cout << "\n\n\t\t\t\tERROR : Sehv secim! 3-cu xana bos deyil :/\n\n\n" << endl;
					Sleep(4000);
					system("cls");
					XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
				}
				break;
			}
			case 4: {
				if (bt4 == '4') {
					bt4 = 'X';
					flag = false;
				}
				else {
					cout << "\n\n\t\t\t\tERROR : Sehv secim! 4-cu xana bos deyil :/\n\n\n" << endl;
					Sleep(4000);
					system("cls");
					XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
				}
				break;
			}
			case 5: {
				if (bt5 == '5') {
					bt5 = 'X';
					flag = false;
				}
				else {
					cout << "\n\n\t\t\t\tERROR : Sehv secim! 5-ci xana bos deyil :/\n\n\n" << endl;
					Sleep(4000);
					system("cls");
					XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
				}
				break;
			}
			case 6: {
				if (bt6 == '6') {
					bt6 = 'X';
					flag = false;
				}
				else {
					cout << "\n\n\t\t\t\tERROR : Sehv secim! 6-ci xana bos deyil :/\n\n\n" << endl;
					Sleep(4000);
					system("cls");
					XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
				}
				break;
			}
			case 7: {
				if (bt7 == '7') {
					bt7 = 'X';
					flag = false;
				}
				else {
					cout << "\n\n\t\t\t\tERROR : Sehv secim! 7-ci xana bos deyil :/\n\n\n" << endl;
					Sleep(4000);
					system("cls");
					XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
				}
				break;
			}
			case 8: {
				if (bt8 == '8') {
					bt8 = 'X';
					flag = false;
				}
				else {
					cout << "\n\n\t\t\t\tERROR : Sehv secim! 8-ci xana bos deyil :/\n\n\n" << endl;
					Sleep(4000);
					system("cls");
					XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
				}
				break;
			}
			case 9: {
				if (bt9 == '9') {
					bt9 = 'X';
					flag = false;
				}
				else {
					cout << "\n\n\t\t\t\tERROR : Sehv secim! 9-cu xana bos deyil :/\n\n\n" << endl;
					Sleep(4000);
					system("cls");
					XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
				}
				break;
			}

			}
		}


		XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);

		if (num > 1) {
			if (bt1 == 'X' && bt2 == 'X' && bt3 == 'X') {
				player1Cout();
				break;
			}
			else if (bt4 == 'X' && bt5 == 'X' && bt6 == 'X') {
				player1Cout();
				break;
			}
			else if (bt7 == 'X' && bt8 == 'X' && bt9 == 'X') {
				player1Cout();
				break;
			}
			else if (bt1 == 'X' && bt4 == 'X' && bt7 == 'X') {
				player1Cout();
				break;
			}
			else if (bt2 == 'X' && bt5 == 'X' && bt8 == 'X') {
				player1Cout();
				break;
			}
			else if (bt3 == 'X' && bt6 == 'X' && bt9 == 'X') {
				player1Cout();
				break;
			}
			else if (bt1 == 'X' && bt5 == 'X' && bt9 == 'X') {
				player1Cout();
				break;
			}
			else if (bt3 == 'X' && bt5 == 'X' && bt7 == 'X') {
				player1Cout();
				break;
			}
			else if (num == 4) {
				cout << "\n\n\n\t\t\t\t     Qalib yoxdur :/" << endl;
				break;
			}
		}

		//=========================================================================

		//Oyuncu 2-nin secimlerini yoxlamaq

		if (num < 4) {
			bool flag = true;
			while (flag) {
				cout << "Oyuncu 2, sira sende! Hansi reqemli yeri secirsen ? " << endl;
				int player2 = 0;
				cin >> player2;
				Sleep(500);
				system("cls");

				switch (player2)
				{
				case 1: {
					if (bt1 == '1') {
						bt1 = 'O';
						flag = false;
					}
					else {
						cout << "\n\n\t\t\t\tERROR : Sehv secim! 1-ci xana bos deyil :/\n\n\n" << endl;
						Sleep(4000);
						system("cls");
						XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
					}
					break;
				}
				case 2: {
					if (bt2 == '2') {
						bt2 = 'O';
						flag = false;
					}
					else {
						cout << "\n\n\t\t\t\tERROR : Sehv secim! 2-ci xana bos deyil :/\n\n\n" << endl;
						Sleep(4000);
						system("cls");
						XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
					}
					break;
				}
				case 3: {
					if (bt3 == '3') {
						bt3 = 'O';
						flag = false;
					}
					else {
						cout << "\n\n\t\t\t\tERROR : Sehv secim! 3-cu xana bos deyil :/\n\n\n" << endl;
						Sleep(4000);
						system("cls");
						XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
					}
					break;
				}
				case 4: {
					if (bt4 == '4') {
						bt4 = 'O';
						flag = false;
					}
					else {
						cout << "\n\n\t\t\t\tERROR : Sehv secim! 4-cu xana bos deyil :/\n\n\n" << endl;
						Sleep(4000);
						system("cls");
						XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
					}
					break;
				}
				case 5: {
					if (bt5 == '5') {
						bt5 = 'O';
						flag = false;
					}
					else {
						cout << "\n\n\t\t\t\tERROR : Sehv secim! 5-ci xana bos deyil :/\n\n\n" << endl;
						Sleep(4000);
						system("cls");
						XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
					}
					break;
				}
				case 6: {
					if (bt6 == '6') {
						bt6 = 'O';
						flag = false;
					}
					else {
						cout << "\n\n\t\t\t\tERROR : Sehv secim! 6-ci xana bos deyil :/\n\n\n" << endl;
						Sleep(4000);
						system("cls");
						XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
					}
					break;
				}
				case 7: {
					if (bt7 == '7') {
						bt7 = 'O';
						flag = false;
					}
					else {
						cout << "\n\n\t\t\t\tERROR : Sehv secim! 7-ci xana bos deyil :/\n\n\n" << endl;
						Sleep(4000);
						system("cls");
						XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
					}
					break;
				}
				case 8: {
					if (bt8 == '8') {
						bt8 = 'O';
						flag = false;
					}
					else {
						cout << "\n\n\t\t\t\tERROR : Sehv secim! 8-ci xana bos deyil :/\n\n\n" << endl;
						Sleep(4000);
						system("cls");
						XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
					}
					break;
				}
				case 9: {
					if (bt9 == '9') {
						bt9 = 'O';
						flag = false;
					}
					else {
						cout << "\n\n\t\t\t\tERROR : Sehv secim! 9-cu xana bos deyil :/\n\n\n" << endl;
						Sleep(4000);
						system("cls");
						XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);
					}
					break;
				}

				}
			}

		}

		XOSelect(bt1, bt2, bt3, bt4, bt5, bt6, bt7, bt8, bt9);


		if (num > 1) {
			if (bt1 == 'O' && bt2 == 'O' && bt3 == 'O') {
				player2Cout();
				break;
			}
			else if (bt4 == 'O' && bt5 == 'O' && bt6 == 'O') {
				player2Cout();
				break;
			}
			else if (bt7 == 'O' && bt8 == 'O' && bt9 == 'O') {
				player2Cout();
				break;
			}
			else if (bt1 == 'O' && bt4 == 'O' && bt7 == 'O') {
				player2Cout();
				break;
			}
			else if (bt2 == 'O' && bt5 == 'O' && bt8 == 'O') {
				player2Cout();
				break;
			}
			else if (bt3 == 'O' && bt6 == 'O' && bt9 == 'O') {
				player2Cout();
				break;
			}
			else if (bt1 == 'O' && bt5 == 'O' && bt9 == 'O') {
				player2Cout();
				break;
			}
			else if (bt3 == 'O' && bt5 == 'O' && bt7 == 'O') {
				player2Cout();
				break;
			}


		}

		num++;
	}
}