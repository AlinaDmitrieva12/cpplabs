#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Rectangles and circle...");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({20, 232});
    shape1.setRotation(-135);
    shape1.setPosition({64, 465});
    shape1.setFillColor(sf::Color(255, 0, 0));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({20, 300});
    shape2.setRotation(0);
    shape2.setPosition({50, 150});
    shape2.setFillColor(sf::Color(255, 0, 0));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({20, 232});
    shape3.setRotation(-45);
    shape3.setPosition({50, 150});
    shape3.setFillColor(sf::Color(255, 0, 0));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({20, 300});
    shape4.setRotation(-15);
    shape4.setPosition({370, 160});
    shape4.setFillColor(sf::Color(255, 0, 0));
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({20, 300});
    shape5.setRotation(15);
    shape5.setPosition({370, 160});
    shape5.setFillColor(sf::Color(255, 0, 0));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({20, 232});
    shape6.setRotation(90);
    shape6.setPosition({500, 300});
    shape6.setFillColor(sf::Color(255, 0, 0));
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({20, 300});
    shape7.setRotation(-15);
    shape7.setPosition({640, 160});
    shape7.setFillColor(sf::Color(255, 0, 0));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({20, 300});
    shape8.setRotation(15);
    shape8.setPosition({640, 160});
    shape8.setFillColor(sf::Color(255, 0, 0));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({20, 232});
    shape9.setRotation(90);
    shape9.setPosition({770, 330});
    shape9.setFillColor(sf::Color(255, 0, 0));
    window.draw(shape9);

    window.display();

    sf::sleep(sf::seconds(5));
}