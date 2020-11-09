#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include "color.h"

using namespace std;

HANDLE hOut;
void color_reset()
{
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
}
void color_red()
{
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_RED);
}
void color_green()
{
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN);
}
void color_blue()
{
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE);
}
void color_purple()
{
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED);
}

void fcolor_red()
{
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, BACKGROUND_RED);
}
void fcolor_green()
{
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, BACKGROUND_GREEN);
}
void fcolor_blue()
{
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, BACKGROUND_BLUE);
}
void fcolor_purple()
{
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_RED);
}
void frag_color_red(string txt, bool a) {
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_RED);
	if (a == true) {
		cout << txt << endl;
	}
	else {
		cout << txt;
	}
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
}
void frag_color_green(string txt, bool a) {
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN);
	if (a == true) {
		cout << txt << endl;
	}
	else {
		cout << txt;
	}
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
}
void frag_color_blue(string txt, bool a) {
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE);
	if (a == true) {
		cout << txt << endl;
	}
	else {
		cout << txt;
	}
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
}
void frag_color_purple(string txt, bool a) {
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED);
	if (a == true) {
		cout << txt << endl;
	}
	else {
		cout << txt;
	}
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
}