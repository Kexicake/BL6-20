#include <SFML/Graphics.hpp>
#include <windows.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <locale>
#include <codecvt>


#define w 1300
#define h 900
#define speed 0.125

using namespace sf;
using namespace std;

RenderWindow window(VideoMode(w, h), "BL6-20");
double x = 0, y = 0;
bool tap = true;
bool poz = false;
String text;
wifstream stroka(L"C:\\dev\\SFML_Tutorial\\Debug\\text\\rid.txt");

wchar_t help(char un) {
	switch (un)
	{
	case 'f':
		return L'a';
	case '@':
		return L'б';
	case 'd':
		return L'в';
	case 'u':
		return L'г';
	case 'l':
		return L'д';
	case 't':
		return L'е';
	case '`':
		return L'ё';
	case ';':
		return L'ж';
	case 'p':
		return L'з';
	case 'b':
		return L'и';
	case 'r':
		return L'к';
	case 'k':
		return L'л';
	case 'v':
		return L'м';
	case 'y':
		return L'н';
	case 'j':
		return L'о';
	case 'g':
		return L'п';
	case 'h':
		return L'р';
	case 'c':
		return L'с';
	case 'n':
		return L'т';
	case 'e':
		return L'у';
	case 'a':
		return L'ф';
	case '[':
		return L'х';
	case 'w':
		return L'ц';
	case 'x':
		return L'ч';
	case 'o':
		return L'щ';
	case 'i':
		return L'ш';
	case ']':
		return L'ъ';
	case 's':
		return L'ы';
	case 'm':
		return L'ь';
	case '\'':
		return L'э';
	case '#':
		return L'ю';
	case 'z':
		return L'я';
	case ' ':
		return L' ';
	case '.':
		return L'.';
	case ',':
		return L',';
	case 'F':
		return L'А';
	case '$':
		return L'Б';
	case 'D':
		return L'В';
	case 'U':
		return L'Г';
	case 'L':
		return L'Д';
	case 'T':
		return L'Е';
	case '~':
		return L'Ё';
	case '^':
		return L'Ж';
	case 'P':
		return L'З';
	case 'B':
		return L'И';
	case 'R':
		return L'К';
	case 'K':
		return L'Л';
	case 'V':
		return L'М';
	case 'Y':
		return L'Н';
	case 'J':
		return L'О';
	case 'G':
		return L'П';
	case 'H':
		return L'Р';
	case 'C':
		return L'С';
	case 'N':
		return L'Т';
	case 'E':
		return L'У';
	case 'A':
		return L'Ф';
	case '{':
		return L'Х';
	case 'W':
		return L'Ц';
	case 'X':
		return L'Ч';
	case 'O':
		return L'Щ';
	case 'I':
		return L'Ш';
	case '}':
		return L'Ъ';
	case 'S':
		return L'Ы';
	case 'M':
		return L'Ь';
	case '\"':
		return L'Э';
	case '%':
		return L'Ю';
	case 'Z':
		return L'Я';
	case 'q':
		return L'й';
	case '1':
		return L'1';
	case '2':
		return L'2';
	case '3':
		return L'3';
	case '4':
		return L'4';
	case '5':
		return L'5';
	case '6':
		return L'6';
	case '7':
		return L'7';
	case '8':
		return L'8';
	case '9':
		return L'9';
	case '0':
		return L'0';
	default:
		return L'Й';
	}
}

void next() {
	setlocale(LC_ALL, "Russian");
	wchar_t buff[80];

	String a = L"";

	stroka.read(buff,80);
	//cout << buff;
	for (int i = 0; i < 80	; i++) {	
		a += help(buff[i]);
	}
	text = a + L'\n';
	a = "";
	stroka.read(buff, 80);
	//cout << buff;
	for (int i = 0; i < 80; i++) {
		a += help(buff[i]);
	}
	text += a + L'\n';
	a = "";
	stroka.read(buff, 80);
	//cout << buff;
	for (int i = 0; i < 80; i++) {
		a += help(buff[i]);
	}
	text += a + L'\n';
	a = "";
	stroka.read(buff, 80);
	//cout << buff;
	for (int i = 0; i < 80; i++) {
		a += help(buff[i]);
	}
	text += a + L'\n';
	string b = a;
}

void RenderText(String texts) {
	//Подключение русского
	setlocale(LC_ALL, "Russian");

	//ЗАГРУЗКА ШРИФТА
	Font font;
	font.loadFromFile("C:\\dev\\SFML_Tutorial\\Debug\\fonts\\Montserrat-SemiBoldItalic.ttf");

	//ТЕКСТ
	Text text;
	text.setFont(font);
	text.setString(texts);
	text.setCharacterSize(24);
	text.setFillColor(Color::White);
	text.setPosition(78, 677);
	window.draw(text);
}

void RenderDialog() {
	RectangleShape rectangle(Vector2f(1200.f, 200.f));
	rectangle.setPosition(50, 650);
	rectangle.setFillColor(Color(25, 25, 112, 200));
	window.draw(rectangle);

	RectangleShape rectangle1(Vector2f(1150.f, 150.f));
	rectangle1.setPosition(72, 675);
	rectangle1.setFillColor(Color(25, 25, 112, 0));
	rectangle1.setOutlineThickness(7.f);
	rectangle1.setOutlineColor(Color(255, 255, 0, 200));
	window.draw(rectangle1);
}

void RenderMan(){

}

void RenderGameWindow(Sprite back, Sprite man) {
	window.draw(back); 
	window.draw(man);
	RenderDialog();
	RenderText(text);
	window.display();
}

int main()
{
	setlocale(LC_ALL, "Russian");
	next();
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
			if (event.type == Event::KeyPressed) {
				if (event.key.code == Keyboard::Space) {
					tap = true;
					if (poz) {
						poz = false;
					}
					else {
						poz = true;
					}

				}
			}
		}

		//ФОН
		String img = "C:\\dev\\SFML_Tutorial\\Debug\\texture\\bg1.png";
		Texture texture;
		texture.loadFromFile(img);
		Sprite sprite(texture);
		//window.draw(sprite);

		//РОБЕРТ СПРАЙТ
		Texture textureMan;
		textureMan.loadFromFile("C:\\dev\\SFML_Tutorial\\Debug\\texture\\robert.png");
		Sprite spriteMan(textureMan);

		if (tap) {
			for (int i = 0; i < 256 * speed; i++) {
					if (poz) 
						spriteMan.setPosition(400, 0);
					
					spriteMan.setColor(Color(255, 255, 255, int(i/speed)));
					RenderGameWindow(sprite, spriteMan);
			}
			tap = false;
			next();
		}

		if (poz) 
			spriteMan.setPosition(400, 0);
		setlocale(LC_ALL, "Russian");

		//RenderGameWindow(sprite, spriteMan);
		
	}
	return 0;
}