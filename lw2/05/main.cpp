#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Rectangles and circle...");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({500, 300});
    shape1.setRotation(0);
    shape1.setPosition({130, 270});
    shape1.setFillColor(sf::Color(68, 33, 18));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({100, 220});
    shape2.setRotation(0);
    shape2.setPosition({160, 350});
    shape2.setFillColor(sf::Color(49, 51, 53));
    window.draw(shape2);

    sf::ConvexShape trapeze;
    trapeze.setFillColor(sf::Color(138, 51, 36));
    trapeze.setPosition(230, 210);
    trapeze.setPointCount(4);
    trapeze.setPoint(0, {-50, -50});
    trapeze.setPoint(1, {350, -50});
    trapeze.setPoint(2, {450, 110});
    trapeze.setPoint(3, {-150, 110});
    window.draw(trapeze);

    sf::RectangleShape shape3;
    shape3.setSize({40, 80});
    shape3.setRotation(0);
    shape3.setPosition({480, 150});
    shape3.setFillColor(sf::Color(58, 58, 58));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({70, 40});
    shape4.setRotation(0);
    shape4.setPosition({465, 130});
    shape4.setFillColor(sf::Color(58, 58, 58));
    window.draw(shape4);

    sf::CircleShape cloud1(10);
    cloud1.setPosition({490, 110});
    cloud1.setFillColor(sf::Color(150, 150, 150));
    window.draw(cloud1);

    sf::CircleShape cloud2(13);
    cloud2.setPosition({492, 90});
    cloud2.setFillColor(sf::Color(150, 150, 150));
    window.draw(cloud2);

    sf::CircleShape cloud3(16);
    cloud3.setPosition({494, 70});
    cloud3.setFillColor(sf::Color(150, 150, 150));
    window.draw(cloud3);

    sf::CircleShape cloud4(19);
    cloud4.setPosition({496, 50});
    cloud4.setFillColor(sf::Color(150, 150, 150));
    window.draw(cloud4);

    window.display();

    sf::sleep(sf::seconds(10));
}