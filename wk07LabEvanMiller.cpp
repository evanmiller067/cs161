/*  Define an enumeration type, triangleType that has the values scalene, isosceles, equilateral, and noTriangle.  Write a function, triangleShape that takes as parameters three numbers, each of which represents the length of a side of a triangle.  The function should return the shape of the triangle. (Note: In a triangle, the sum of the lengths of any two sides is greater than the length of the third side.)

 Evan Miller
 cs161
 sources: None
*/

#include <iostream>

using namespace std;

int a = 0, b = 0, c = 0, value = 0, tVal = 0;
enum triangleType {scalene, isosceles, equilateral, noTriangle};
triangleType s = scalene, i = isosceles, e = equilateral, nt = noTriangle;

int triangleShape(int a, int b, int c){
    if (a == b && b == c) {
        value = equilateral; // equilateral
    }else if ( (a == b && b != c && a != c) || ( a == c && c != b && a != b) ){
        value =  isosceles; // isosceles
    }else if (a != b && b != c && a != c){
        value =  scalene; // scalene
    }if ((a + b) < c){
        value = noTriangle; // noTriangle
    }
    return value;
}

int main(){
    
    cout << "Please enter three numbers, saparated by a space, each representing the length of a side of a triangle: ";
    cin >> a >> b >> c;
    cout << endl;
    if (triangleShape(a, b, c) == 0) {
         tVal = s;
    }else if (triangleShape(a, b, c) == 1){
        tVal = i;
    }else if (triangleShape(a, b, c) == 2){
        tVal = e;
    }if (triangleShape(a, b, c) == 3){
        tVal = nt;
    }
    switch (tVal) {
        case scalene:
            cout << "Scalene Triangle." << endl;
            break;
        case isosceles:
            cout << "Isosceles Triangle." << endl;
            break;
        case equilateral:
            cout << "Equilateral Triangle." << endl;
            break;
        case noTriangle:
            cout << "Not a Triangle." << endl;
            break;
        default:
            break;
    }
}
