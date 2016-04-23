#ifndef rectangle_hpp
#define rectangle_hpp
#include <stdio.h>

class Rectangle // Rectangle class definition
{
private:
    int x1,y1;
    int h,w;
    
public:
    /*	Rectangle();
     Rectangle(int,int,int,int);
     */
    Rectangle(int x = 0, int y = 0, int height = 0, int width = 0)
    : x1(x), y1(y), h(height), w(width)
    {}
    
    int operator==(const Rectangle &);
    
    int GetWidth();
    
    int GetHeight();
};

#endif /* rectangle_hpp */