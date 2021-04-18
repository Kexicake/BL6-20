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
		return L'�';
	case 'd':
		return L'�';
	case 'u':
		return L'�';
	case 'l':
		return L'�';
	case 't':
		return L'�';
	case '`':
		return L'�';
	case ';':
		return L'�';
	case 'p':
		return L'�';
	case 'b':
		return L'�';
	case 'r':
		return L'�';
	case 'k':
		return L'�';
	case 'v':
		return L'�';
	case 'y':
		return L'�';
	case 'j':
		return L'�';
	case 'g':
		return L'�';
	case 'h':
		return L'�';
	case 'c':
		return L'�';
	case 'n':
		return L'�';
	case 'e':
		return L'�';
	case 'a':
		return L'�';
	case '[':
		return L'�';
	case 'w':
		return L'�';
	case 'x':
		return L'�';
	case 'o':
		return L'�';
	case 'i':
		return L'�';
	case ']':
		return L'�';
	case 's':
		return L'�';
	case 'm':
		return L'�';
	case '\'':
		return L'�';
	case '#':
		return L'�';
	case 'z':
		return L'�';
	case ' ':
		return L' ';
	case '.':
		return L'.';
	case ',':
		return L',';
	case 'F':
		return L'�';
	case '$':
		return L'�';
	case 'D':
		return L'�';
	case 'U':
		return L'�';
	case 'L':
		return L'�';
	case 'T':
		return L'�';
	case '~':
		return L'�';
	case '^':
		return L'�';
	case 'P':
		return L'�';
	case 'B':
		return L'�';
	case 'R':
		return L'�';
	case 'K':
		return L'�';
	case 'V':
		return L'�';
	case 'Y':
		return L'�';
	case 'J':
		return L'�';
	case 'G':
		return L'�';
	case 'H':
		return L'�';
	case 'C':
		return L'�';
	case 'N':
		return L'�';
	case 'E':
		return L'�';
	case 'A':
		return L'�';
	case '{':
		return L'�';
	case 'W':
		return L'�';
	case 'X':
		return L'�';
	case 'O':
		return L'�';
	case 'I':
		return L'�';
	case '}':
		return L'�';
	case 'S':
		return L'�';
	case 'M':
		return L'�';
	case '\"':
		return L'�';
	case '%':
		return L'�';
	case 'Z':
		return L'�';
	case 'q':
		return L'�';
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
		return L'�';
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
	//����������� ��������
	setlocale(LC_ALL, "Russian");

	//�������� ������
	Font font;
	font.loadFromFile("C:\\dev\\SFML_Tutorial\\Debug\\fonts\\Montserrat-SemiBoldItalic.ttf");

	//�����
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
	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
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

		//���
		String img = "C:\\dev\\SFML_Tutorial\\Debug\\texture\\bg1.png";
		Texture texture;
		texture.loadFromFile(img);
		Sprite sprite(texture);
		//window.draw(sprite);

		//������ ������
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