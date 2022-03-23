#include <string>
#include <iostream>
#include "Direction.hpp"

using namespace std;

namespace ariel{
class Notebook{
public:
static void write(unsigned int page, unsigned int row, unsigned int col, Direction direction, std::string a);
static string read(unsigned int page, unsigned int row, unsigned int col, Direction direction, unsigned int numOfChars);
static void erase (unsigned int page, unsigned int row, unsigned int col, Direction direction, unsigned int numOfChars);
void show(unsigned int page);
};
}