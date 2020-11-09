//By Patryk Januszewski - januszewskijanuszek
#include <iostream>
#include <fstream>
#include <windows.h>
#include <math.h>
#include "Color/color.h"
#include "prog/prog.h"

using namespace std;

fstream plik;
int droga(int i);
int main() {
	plik.open("Liczydlo.txt", ios::out);
	if (plik.good() == false)
	{
		color_red();
		cout << "Plik istnieje, prosze go usunac"	<< endl;
		system("Pause>nul");
		color_reset();
		cout << "Nacisnij dowolny przycisk"			<< endl;
		return 0;
	}
	int parameter;
	int r = 21474836;
	double round = 0;
	for (int i = 0; i < r; i++) {
		if (i % 100000 == 0) {
			system("cls");
			round += 1000000;
			cout << "By - Patryk Januszewski"						<< endl;
			cout << "Utworzono: " << i << " z 21474836"			<< endl;
			color_green();
			progress_bar_extended(ceil(droga(i)));
			color_reset();
		}
		plik << i << endl;
	}
	cout << "Plik zostal poprawnie wygenerowany!" << endl;
	cout << "Nacisnij dowolny klawisz aby zamknac" << endl;
	system("Pause>nul");
	return 0;
}
int droga(int i) {
	float n = i;
	return (ceil((n / 21474836) * 100));
}