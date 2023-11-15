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


void SetColor(int ForgC)
{
	WORD wColor;

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
	{
		wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
		SetConsoleTextAttribute(hStdOut, wColor);
	}
	return;
}

void SetColor(int textColor, int backgroundColor)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, (WORD)((backgroundColor << 4) | textColor));
}
void simbol_digit(char t[])
{
	for (int i = 0; t[i]; i++)
	{
		if (t[i] >= 48 && t[i] <= 57)
		{

			t[i] = 32;

		}


	}
}


void simbol_latin(char t[])
{
	for (int i = 0; t[i]; i++)
	{

		if (t[i] >= 65 && t[i] <= 90 || t[i] >= 97 && t[i] <= 122)
		{

			t[i] = 32;

		}



	}
}

void simbol_punct(char t[])
{
	for (int i = 0; t[i]; i++)
	{

		if (t[i] == 33 || t[i] == 34 || t[i] >= 39 && t[i] <= 42 || t[i] >= 44 && t[i] <= 47
			|| t[i] >= 58 && t[i] <= 59 || t[i] >= 63 && t[i] <= 64)
		{

			t[i] = 32;


		}


	}
}

void simbol_cyrillic(char t[])
{
	for (int i = 0; t[i]; i++)
	{
		if (t[i] >= 'À' && t[i] <= 'ß' || t[i] >= 'à' && t[i] <= 'ÿ')
		{

			t[i] = 32;

		}

	}
}


void show_line(char t[])
{
	for (int i = 0; t[i]; i++)
	{
		if (t[i] >= 'À' && t[i] <= 'ß' || t[i] >= 'à' && t[i] <= 'ÿ')
		{
			SetColor(6);
			cout << t[i];
			SetColor(7);

		}
		else if (t[i] == 33 || t[i] == 34 || t[i] >= 39 && t[i] <= 42 || t[i] >= 44 && t[i] <= 47
			|| t[i] >= 58 && t[i] <= 59 || t[i] >= 63 && t[i] <= 64)
		{
			SetColor(4);
			cout << t[i];
			SetColor(7);
		}

		else if (t[i] >= 65 && t[i] <= 90 || t[i] >= 97 && t[i] <= 122)
		{
			SetColor(2);
			cout << t[i];
			SetColor(7);

		}

		else if (t[i] >= 48 && t[i] <= 57)
		{
			SetColor(1);
			cout << t[i];
			SetColor(7);
		}

		else
		{
			SetColor(7);
			cout << t[i];
			SetColor(7);
		}



	}
}