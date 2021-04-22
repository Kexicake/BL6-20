#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
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
#define exe "C:\\dev\\SFML_Tutorial\\Debug\\"

using namespace sf;
using namespace std;

RenderWindow window(VideoMode(w, h), "BL6-20");
double x = 0, y = 0;
int j = 0;
bool tap = true;
bool poz = false;
SoundBuffer buffer;
string skin = "texture\\who\\skin.png", 
	   face = "texture\\who\\face.png", 
	   clothes = "texture\\who\\clothes.png", 
	   back = "texture\\bg1.png";
String text, temp;
ifstream stroka("text\\rd.txt");

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
	case '*':
		return L'�';
	case 'w':
		return L'�';
	case 'x':
		return L'�';
	case 'o':
		return L'�';
	case 'i':
		return L'�';
	case '_':
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
	case '\n':
		return L'\n';
	case '?':
		return L'?';
	case ':':
		return L':';
	default:
		return L'�';
	}
}

void next() {
	setlocale(LC_ALL, "Russian");
	string line, settings;
	String txt, m, temp;
	int count;
	text = "";
	//getline(stroka, settings);
	
	double n = line.size();
	n /= 75;
	count = ceil(n);
	
	for (int i = 0; i < 4; i++)
	{	
		getline(stroka, line);
		line += '\n';
		cout << line;
		for (int j = 0; j < line.size(); j++)
		{
			text += help(line[j]);
		}
	}
}

void RenderText() {
	//����������� ��������
	setlocale(LC_ALL, "Russian");

	//�������� ������
	Font font;
	font.loadFromFile("fonts\\Montserrat-SemiBoldItalic.ttf");

	//�����
	Text text1;
	text1.setFont(font);
	text1.setString(text);
	text1.setCharacterSize(24);
	text1.setFillColor(Color::White);
	text1.setPosition(78, 677);
	window.draw(text1);
}

void RenderMan() {
	
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

void RenderGameWindow(Sprite back,Sprite skin, Sprite face, Sprite clothes ) {
	window.draw(back); 
	//RenderMan();
	window.draw(skin);
	window.draw(face);
	window.draw(clothes);
	RenderDialog();
	RenderText();
	window.display();
}

int main()
{
	setlocale(LC_ALL, "Russian");
	next();
	// �������� ������
	buffer.loadFromFile("music\\main.wav");
	Sound sound;
	sound.setBuffer(buffer);
	sound.play();
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
		Texture texture;
		texture.loadFromFile(back);
		Sprite sprite(texture);
		//window.draw(sprite);

		//������ ������
		Texture textureMan;
		Texture skin_t, face_t, clothes_t;
		skin_t.loadFromFile(skin);
		face_t.loadFromFile(face);
		clothes_t.loadFromFile(clothes);
		Sprite skin_s(skin_t);
		Sprite face_s(face_t);
		Sprite clothes_s(clothes_t);
		
		Sprite spriteMan(textureMan);

		if (tap) {
			for (int i = 0; i < 256 * speed; i++) {
				if (poz) {
					skin_s.setPosition(400, 0);
					face_s.setPosition(400, 0);
					clothes_s.setPosition(400, 0);
					}
						if (i == 0){
							j += 1;
							if (j == 5) {
								skin = "texture\\zlata\\skin.png";
									face = "texture\\zlata\\face.png";
									clothes = "texture\\zlata\\clothes.png";
									back = "texture\\vorota.png";
							}
							if (j == 20) {
								skin = "texture\\who\\skin.png";
								face = "texture\\who\\face.png";
								clothes = "texture\\who\\clothes.png";
								back = "texture\\bg1.png";

							}
							if (j == 30) {
								j = 0;
							}
							skin_t.loadFromFile(skin);
							face_t.loadFromFile(face);
							clothes_t.loadFromFile(clothes);
							Sprite skin_s(skin_t);
							Sprite face_s(face_t);
							Sprite clothes_s(clothes_t);
						}
						skin_s.setColor(Color(255, 255, 255, int(i/speed)));
						face_s.setColor(Color(255, 255, 255, int(i/speed)));
						clothes_s.setColor(Color(255, 255, 255, int(i/speed)));
					RenderGameWindow(sprite, skin_s, face_s, clothes_s);
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