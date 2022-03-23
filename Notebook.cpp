
#include <iostream>
#include "Notebook.hpp"
#include "Direction.hpp"
using ariel::Direction;
#include <stdexcept>
#include <string>

using namespace std;
namespace ariel{
void Notebook::write(unsigned int page, unsigned int row, unsigned int col, Direction direction, std::string a){
    
}

string Notebook::read(unsigned int page, unsigned int row, unsigned int col, Direction direction, unsigned int numOfChars){
    return "\0";
}

void Notebook::erase (unsigned int page, unsigned int row, unsigned int col, Direction direction, unsigned int numOfChars){

}
void Notebook::show(unsigned int page){
    
}

}

