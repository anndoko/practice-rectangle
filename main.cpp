/* this program is used to demonstrate the
cpp operator overloading for operator ==
*/

#include <iostream>
#include "rectangle.hpp"
using namespace std;

int main()
{
    /* announcement*/
    Rectangle *t;
    Rectangle r1(1, 3, 6, 6), r2(1, 3, 8, 8);
    
    /* operator overloading for == */
    if(r1==r2) cout << "Equal" << "\n" << endl;
    else cout << "r1 and r2 are not equal." << endl << endl;
    
    
    /*------ print r1 and r2 info ------*/
    cout << "\nr1.h: " << r1.GetHeight() << "\nr1.w: " << r1.GetWidth() << endl;
    cout << "The area of rectangle r1: " << r1.GetHeight() * r1.GetWidth() << endl;
    
    t = &r2;
    cout << "\nr2.h: " << t->GetHeight() << "\nr1.w: " << t->GetWidth() << endl;
    cout << "The area of rectangle r2: " << t->GetHeight()* t->GetWidth() << endl;
    
    /*------ compare r1 and r2 ------*/
    
    if( r1.GetHeight() * r1.GetWidth() > t->GetHeight()* t->GetWidth() )
        cout << "\nThe area of r1 is greater" << endl;
    
    if ( r1.GetHeight() * r1.GetWidth() == t->GetHeight()* t->GetWidth() )
        cout << "\nThe area of r1 is equal to the area of r2." << endl;
    
    if ( r1.GetHeight() * r1.GetWidth() < t->GetHeight()* t->GetWidth() )
        cout << "\nThe area of r2 is greater." << endl << endl;
    
    return 0;
}
