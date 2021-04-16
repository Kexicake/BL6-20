#include <SFML/Graphics.hpp>
#include <windows.h>
#define w 1300
#define h 900

using namespace sf;

RenderWindow window(VideoMode(w, h), "BL6-20");
double x = 0, y = 0;
bool ke = true;
bool poz = false;

void RenderText(String texts) {
	//����������� ��������
	setlocale(LC_ALL, "Russian");

	//�������� ������
	Font font;
	font.loadFromFile("fonts\\Montserrat-SemiBoldItalic.ttf");

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

int main()
{
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
					ke = true;
					if (poz) {
						poz = false;
					}
					else {
						poz = true;
					}

				}
			}
		}
		// ������ ���� ����
		//window.clear(Color(180, 231, 250));

		//���
		String img = "texture\\bg1.png";
		Texture texture;
		texture.loadFromFile(img);
		Sprite sprite(texture);
		//window.draw(sprite);

		//������ ������
		Texture textureMan;
		textureMan.loadFromFile("texture\\robert.png");
		Sprite spriteMan(textureMan);
		if (ke) {
			for (int i = 255 * 4; i >= 0; i--) {
				if (i % 4 != 0) {
					if (!poz)
						spriteMan.setPosition(400, 0);

					spriteMan.setColor(Color(255, 255, 255, int(i / 4)));

					window.draw(sprite);
					window.draw(spriteMan);
					RenderDialog();

					window.display();
				}
			}
			for (int i = 0; i < 255*4; i++) {
				if (i % 4 != 0) {
					if (poz) 
						spriteMan.setPosition(400, 0);
					
					spriteMan.setColor(Color(255, 255, 255, int(i / 4)));

					window.draw(sprite);
					window.draw(spriteMan);
					RenderDialog();
					
					window.display();
				}
			}
			ke = false;
		}

		if (poz) 
			spriteMan.setPosition(400, 0);
		
		window.draw(sprite);
		window.draw(spriteMan);
		RenderDialog();
		RenderText(L"����: � � ����� �������� ��������� ������������� ��� � ��� ����� ��� ��������� \n����: � � ����� �������� ��������� ������������� ��� � ��� ����� ��� ��������� \n����: � � ����� �������� ��������� ������������� ��� � ��� ����� ��� ��������� \n����: � � ����� �������� ��������� ������������� ��� � ��� ����� ��� ��������� \n����: � � ����� �������� ��������� ������������� ��� � ��� ����� ��� ��������� \n");

		window.display();
	}
	return 0;
}