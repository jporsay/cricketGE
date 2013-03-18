#include <cricketsfml/graphics/Sprite.h>

namespace graphics {

void Sprite::setRect(Rect<int> r) {
 _sprite->setTextureRect(sf::IntRect(r.x, r.y, r.w, r.h));
}

IntRect Sprite::getRect() const {
    sf::IntRect r = _sprite->getTextureRect();
    return IntRect(r.left, r.top, r.width, r.height);
}

void Sprite::setPosition(float x, float y) {
 _sprite->setPosition(x, y);
}

void Sprite::setPosition(FloatPoint p) {
 this->setPosition(p.x, p.y);
}

FloatPoint Sprite::getPosition() const {
    return FloatPoint(_sprite->getPosition().x, _sprite->getPosition().y);
}

void Sprite::setOrigin(float x, float y) {
 _sprite->setOrigin(x, y);
}

void Sprite::setOrigin(FloatPoint p) {
 this->setOrigin(p.x, p.y);
}

FloatPoint Sprite::getOrigin() const {
    return FloatPoint(_sprite->getOrigin().x, _sprite->getOrigin().y);
}

void Sprite::rotate(float angle) {
    _sprite->rotate(angle);
}

float Sprite::getRotation() const {
    return _sprite->getRotation();
}

void Sprite::scale(float factorX, float factorY) {
    _sprite->scale(factorX, factorY);
}

void Sprite::scale(FloatPoint p) {
    this->scale(p.x, p.y);
}

FloatPoint Sprite::getScale() const {
    return FloatPoint(_sprite->getScale().x, _sprite->getScale().y);
}

}
