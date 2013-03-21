#pragma once

#include <cstdint>
#include <SFML/Graphics.hpp>

#include <cricketsfml/graphics/Graphics.h>

#include <iostream>

namespace window {
    class SFMLWindow;
}

namespace graphics {

class Sprite {
public:
friend class window::SFMLWindow;

private:
    sf::Sprite* _sprite;

private:
    Sprite() {};
    void setSprite(sf::Sprite* sprite) { _sprite = sprite; }
    sf::Sprite* getSprite() const { return _sprite; }

public:
    void setRect(IntRect r);
    IntRect getRect() const;

    void setPosition(float x, float y);
    void setPosition(FloatPoint point);
    FloatPoint getPosition() const;

    void setOrigin(float x, float y);
    void setOrigin(FloatPoint point);
    FloatPoint getOrigin() const;

    void rotate(float angle);
    float getRotation() const;

    void scale(float factorX, float factorY);
    void scale(FloatPoint p);
    FloatPoint getScale() const;

    inline static Sprite* loadFromMemory(const char* data, uint64_t size) {
        if (data == 0) {
            std::cout << "failed to load sprite from memory: empty data" << std::endl;
            return 0;
        }
        sf::Texture* t = new sf::Texture();
        if (!t->loadFromMemory(data, size)) {
            std::cout << "failed to load sprite from memory: t.loadFromMemory failed" << std::endl;
            return 0;
        }
        Sprite* s = new Sprite();
        sf::Sprite* sf = new sf::Sprite();
        sf->setTexture(*t);
        s->setSprite(sf);
        return s;
    }
};

}
