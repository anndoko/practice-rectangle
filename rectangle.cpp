#include "rectangle.hpp"
#include <iostream>

using namespace std;
/*
 Rectangle::Rectangle() // Constructor
 {
	x1 = y1 = w = h = 0;
 }
 */

int Rectangle::GetWidth() //Function definition
{
    return w;
}

int Rectangle::GetHeight() //Function definition
{
    return h;
}

/*
 Rectangle::Rectangle(int x, int y, int height, int width)
 {
	x1 = x;	y1 = y;
	h = height;	w = width;
 }
*/

int Rectangle::operator==(const Rectangle &s)
{
    if (this == &s) return 1;
    if ((x1 == s.x1) && (y1 == s.y1) && (h == s.h) && (w == s.w))
        return 1;
    else
        return 0;
}