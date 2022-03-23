#include "doctest.h"
#include "Notebook.hpp"
#include <string>
#include "Direction.hpp"
using namespace ariel;
using ariel::Direction;
#include <iostream>
using namespace std;

Notebook n;

TEST_CASE("vertical"){
n.write(1,1,1,Direction::Vertical,"hello");
n.erase(1,1,1,Direction::Vertical,2);
CHECK(n.read(1,1,1,Direction::Vertical,5).compare("~~llo"));
n.write(5,3,2,Direction::Vertical,"something");
n.erase(5,3,6,Direction::Vertical,3);
CHECK(n.read(1,1,1,Direction::Vertical,5).compare("some~~~ng"));
n.write(10,1,5,Direction::Vertical,"prime");
n.erase(10,1,5,Direction::Vertical,0);
CHECK(n.read(1,1,1,Direction::Vertical,5).compare("prime"));
n.write(8,12,0,Direction::Vertical,"crazy");
n.erase(8,12,1,Direction::Vertical,4);
CHECK(n.read(8,12,1,Direction::Vertical,4).compare("~~~~"));
n.write(5,5,5,Direction::Vertical,"hamsa");
n.erase(5,5,7,Direction::Vertical,1);
CHECK(n.read(5,5,5,Direction::Vertical,5).compare("ha~sa"));
n.write(7,7,7,Direction::Vertical,"lucky");
n.erase(7,7,11,Direction::Vertical,1);
CHECK(n.read(7,7,7,Direction::Vertical,5).compare("luck~"));
n.write(13,13,3,Direction::Vertical,"friday");
n.erase(13,13,5,Direction::Vertical,3);
CHECK(n.read(13,13,3,Direction::Vertical,6).compare("fr~~~y"));
n.write(1,5,0,Direction::Vertical,"black or white");
n.erase(1,5,6,Direction::Vertical,2);
CHECK(n.read(1,5,0,Direction::Vertical,14).compare("black ~~ white"));
n.write(23,5,1,Direction::Vertical,"dream come true");
n.erase(23,5,1,Direction::Vertical,5);
CHECK(n.read(23,5,12,Direction::Vertical,4).compare("true"));
n.write(24,6,2,Direction::Vertical,"make it falsey");
n.erase(24,6,2,Direction::Vertical,8);
n.erase(24,6,15,Direction::Vertical,1);
CHECK(n.read(1,1,1,Direction::Vertical,5).compare("~~~~~~~~false~"));


}

TEST_CASE("horizontal"){
n.write(1,1,1,Direction::Horizontal,"hello");
n.erase(1,1,1,Direction::Horizontal,2);
CHECK(n.read(1,1,1,Direction::Horizontal,5).compare("~~llo"));
n.write(10,6,24,Direction::Horizontal,"tower");
n.erase(10,7,24,Direction::Horizontal,1);
CHECK(n.read(10,6,24,Direction::Horizontal,5).compare("t~wer"));
n.write(33,7,12,Direction::Horizontal,"interesting");
n.erase(33,10,12,Direction::Horizontal,4);
CHECK(n.read(33,8,12,Direction::Horizontal,5).compare("nt~~~~ting"));
n.write(21,0,0,Direction::Horizontal,"birds flying high");
n.erase(21,0,0,Direction::Horizontal,5);
n.erase(21,16,0,Direction::Horizontal,1);
CHECK(n.read(21,1,0,Direction::Horizontal,16).compare("~~~ flying hig~"));
n.write(99,3,99,Direction::Horizontal,"dry");
n.erase(99,4,99,Direction::Horizontal,1);
CHECK(n.read(99,3,99,Direction::Horizontal,3).compare("d~y"));
n.write(22,12,36,Direction::Horizontal,"bluetooth");
n.erase(22,12,36,Direction::Horizontal,4);
CHECK(n.read(22,12,36,Direction::Horizontal,9).compare("~~~~tooth"));
n.write(36,4,15,Direction::Horizontal,"perfect");
n.erase(36,7,15,Direction::Horizontal,2);
n.erase(36,10,15,Direction::Horizontal,1);
CHECK(n.read(36,4,15,Direction::Horizontal,7).compare("per~~c~"));
n.write(17,12,5,Direction::Horizontal,"ball");
n.erase(17,15,5,Direction::Horizontal,1);
CHECK(n.read(17,12,5,Direction::Horizontal,4).compare("bal~"));
n.write(18,1,1,Direction::Horizontal,"ouch");
n.erase(18,2,1,Direction::Horizontal,2);
CHECK(n.read(18,1,1,Direction::Horizontal,4).compare("o~~h"));
n.write(42,0,42,Direction::Horizontal,"glowing");
n.erase(42,1,42,Direction::Horizontal,1);
CHECK(n.read(42,0,42,Direction::Horizontal,7).compare("g~owing"));
}