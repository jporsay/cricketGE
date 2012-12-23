#include "../locator/Locator.hpp"

namespace input {

class Input;
class NullInput;

class Locator : public locator::Locator<Input, NullInput> {};

}