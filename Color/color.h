#include <iostream>

using namespace std;
// By Patryk Januszewski - januszewskijanuszek

void color_reset();	 // Reset koloru
// Kolor
void color_red();	 // Czerwony			text
void color_green();  // Zielony			text
void color_blue();   // Niebieski		text
void color_purple(); // Fioletowy		text
// T�o
void fcolor_red();	 // Czerwone			t�o
void fcolor_green(); // Zielone			t�o
void fcolor_blue();  // Niebieskie		t�o
void fcolor_purple();// Fioletowe		t�o
// Fragmentowe kolorowanie
void frag_color_red(string txt, bool a);
void frag_color_green(string txt, bool a);
void frag_color_blue(string txt, bool a);
void frag_color_purple(string txt, bool a);