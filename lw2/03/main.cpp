#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Traffic lights");

    window.clear();

    sf::RectangleShape shape0;
    shape0.setSize({150, 450});
    shape0.setPosition({325, 25});
    shape0.setFillColor(sf::Color(128, 128, 128));
    window.draw(shape0);

    sf::CircleShape shape1(60);
    shape1.setPosition({340, 50});
    shape1.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape1);

    sf::CircleShape shape2(60);
    shape2.setPosition({340, 190});
    shape2.setFillColor(sf::Color(0xFF, 0xFF, 0x0));
    window.draw(shape2);

    sf::CircleShape shape3(60);
    shape3.setPosition({340, 330});
    shape3.setFillColor(sf::Color(0x0, 0xFF, 0x0));
    window.draw(shape3);

    window.display();

    sf::sleep(sf::seconds(5));
}