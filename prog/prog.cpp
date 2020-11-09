#include <iostream>
#include "prog.h"

using namespace std;

void progress_bar_extended(int i) {
	char tab[100];
	int z = 0;
	cout << "Precent: " << i << "%" << endl;
	cout << "[";
	for (int r = 0; r < i; r++) {
		tab[r] = '#';
		z++;
	}
	for (int r = z; r < 100; r++) {
		tab[r] = ' ';
	}
	for (int j = 0; j < 100; j++) {
		cout << tab[j];
	}
	cout << "]" << endl;
}