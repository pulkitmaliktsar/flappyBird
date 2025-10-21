/*
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <optional>

void main(int argc, char** argv)
{
	sf::RenderWindow window(sf::VideoMode({640,480}), "First window!");

	while (window.isOpen())
	{
		while (const std::optional<sf::Event> event = window.pollEvent()) // could've also used const auto event
		{
			if (event->is<sf::Event::Closed>())
				window.close();
			else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
			{
				if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
					window.close();
			}
		}
		window.clear(sf::Color::Blue);
		// Draw here
		window.display();
	}
}
*/

#include <iostream>

int main()
{
	return EXIT_SUCCESS;
}