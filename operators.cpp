#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 2;
    cout << "Operators in C++";
    cout << "\nFoloowing are the operators in C++:";
    // Arithemetic Operators
    cout << "\nThe value of a+b is: " << a + b << endl;
    cout << "The value of a-b is: " << a - b << endl;
    cout << "The value of a*b is: " << a * b << endl;
    cout << "The value of a/b is: " << a / b << endl;
    cout << "The value of a%b is: " << a % b << endl;
    cout << "The value of a++ is: " << a++ << endl;
    cout << "The value of a-- is: " << a-- << endl;
    cout << "The value of ++a is: " << ++a << endl;
    cout << "The value of --a is: " << --a << endl;
    // Assignment Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';

    // Comparison operators
    cout << "Following are the comparison operators in C++" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;

    // Logical operators
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is:" << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or operator ((a==b) || (a<b)) is:" << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not operator (!(a==b)) is:" << (!(a == b)) << endl;
    return 0;
}
