#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 800), "SFML works!");

    sf::Texture texture;
    texture.loadFromFile("resources/images-content/tilesets/tiles_summer_1.png");

    sf::Sprite sprite;
    sprite.setTexture(texture);
    // <sprite n="bridge_1x1_ggww_10001000_0_g" x="2084" y="322" w="217" h="140" pX="0.5" pY="0.5" oX="3" oY="20" oW="256" oH="160"/>
    sprite.setTextureRect(sf::IntRect(2084, 322, 217, 140));
    // sprite.setPosition(0, 0);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }

    return 0;
}