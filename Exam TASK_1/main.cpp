#define  _CRT_SECURE_NO_WARNINGS
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_ENTER 13
#include <iostream> 
#include <conio.h>
	#include <iomanip>
	#include <ctime>
	#include <stdlib.h>
	#include <math.h>  
	#include<Windows.h>
	#include<clocale>
	#include"Header.h"
	#include  <algorithm>


	using namespace std;


	int main()

	{
	srand(time(NULL));
	setlocale(LC_CTYPE, " ");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\tTask1" << endl;
	char Buffer[200];
	char symbols2[200];
	char symbols1[200];
	int menu=1;
	bool p1=true,p2=true,p3=true,p4 = true;
	cout << "\tEnter a line of symbols" << endl;;
	cin.getline(Buffer, sizeof(Buffer));
	strcpy(symbols2, Buffer);
	strcpy(symbols1, Buffer);
	
	while (menu != 5)
	{
		
		system("CLS");
		cout << endl << endl;
		cout << "\tCharacter options for filtering : " << endl;
		cout << "\t1.  --- Latin Alphabet Characters." << endl;
		cout << "\t2.  --- Cyrillic Alphabet Characters." << endl;
		cout << "\t3.  --- Punctuation Symbols." << endl;
		cout << "\t4.  --- Numbers." << endl;
		cout << "\t5.  --- Exit." << endl;
		cout << endl << endl;
		cout << "\tInitial line is:" << endl;
		show_line(symbols1);
		cout << endl << endl;
		cout << "\tModified line is:" << endl;
		show_line(symbols2);
		strcpy(symbols2, Buffer);
		cout << endl << endl;
		cout << "\tChoose a puct of the menu " << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
			if (p1)
			{
				if (!p2)
				{
					simbol_cyrillic(symbols2);
				}
				if (!p3)
				{
					simbol_punct(symbols2);

				}
				if (!p4)
				{
					simbol_digit(symbols2);

				}
				simbol_latin(symbols2);
						
				p1 = false;
				cout << endl;
			
				break;
			}
			else

			{
				if (!p2)
				{
					simbol_cyrillic(symbols2);
				}
				if (!p3)
				{
					simbol_punct(symbols2);

				}
				if (!p4)
				{
					simbol_digit(symbols2);

				}
			
				
				cout << endl;
				p1 = true;
				break;
			}
		case 2:
			
				if (p2)
				{
					if (!p1)
					{
						simbol_latin(symbols2);
					}
					if (!p3)
					{
						simbol_punct(symbols2);
						
					}
					if (!p4)
					{
						simbol_digit(symbols2);

					}

					simbol_cyrillic(symbols2);
					
					p2 = false;
					cout << endl;
					break;
				}
				else
				{
					if (!p1)
					{
						simbol_latin(symbols2);
					}
					if (!p3)
					{
						simbol_punct(symbols2);

					}
					if (!p4)
					{
						simbol_digit(symbols2);

					}
					
					p2 = true;
					break;
				}
			
		case 3:
			if (p3)
			{
				if (!p1)
				{
					simbol_latin(symbols2);
				}
				if (!p2)
				{
					simbol_cyrillic(symbols2);

				}
				if (!p4)
				{
					simbol_digit(symbols2);

				}
				
				simbol_punct(symbols2);
				
				p3 = false;
				cout << endl;
				break;
			}
			else
			{
				
				if (!p1)
				{
					simbol_latin(symbols2);
				}
				if (!p2)
				{
					simbol_cyrillic(symbols2);

				}
				if (!p4)
				{
					simbol_digit(symbols2);

				}
				p3 = true;
				break;
			}
		case 4:
			if (p4)
			{
				if (!p1)
				{
					simbol_latin(symbols2);
				}
				if (!p2)
				{
					simbol_cyrillic(symbols2);

				}
				if (!p3)
				{
					simbol_punct(symbols2);

				}
			
				simbol_digit(symbols2);
				p4 = false;
				cout << endl;
				break;
			}
			else
			{
			
				if (!p1)
				{
					simbol_latin(symbols2);
				}
				if (!p2)
				{
					simbol_cyrillic(symbols2);

				}
				if (!p3)
				{
					simbol_punct(symbols2);

				}
				p4 = true;
				break;
			}
		case 5:
			break;
			

		}
	}

	_getch();
	return(0);
}