#include <SFML/Graphics.hpp>

namespace graphics {

class Window {
private:
    sf::RenderWindow* _window;
public:
    Window(int width, int height, std::string title);
    ~Window();
};

}