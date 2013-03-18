#pragma once

#include <cstdint>
#include <SFML/Graphics.hpp>

#include <cricketsfml/graphics/Graphics.h>

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
        sf::Texture t;
        if (data == 0 || !t.loadFromMemory(data, size)) {
            return 0;
        }
        Sprite* s = new Sprite();
        s->setSprite(new sf::Sprite(t));
        return s;
    }
};

}
