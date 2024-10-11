#pragma once
#include <SFML/Graphics.hpp>

sf::Vector2f normalize(sf::Vector2f vec);
float getLength(sf::Vector2f vec);
sf::Vector2f changeLength(sf::Vector2f vec, float new_len);
sf::Vector2f operator-(sf::Vector2f a, sf::Vector2f b);