// variable-just a container to store data
// date are of type-int,float,char,double,boolean

// double has more precision than float after decimal.

// boolean is true or false

// int sum=34;  it mean sum is integer variable and storing 34

// syntax for declaring variable

// DATA_TYPE VARIABLE_NAME=VALUE;

///////////////////////////////////SCOPE OF A VARIBLE//////////////////////
// 1.LOCAL-inside of a func and for function use only
// 2.GLOBAL-declare outside func and used everywhere in the program
// qn-can global and local variable has same name in c++? yes why not.

////////////////////////////////////TYPES OF VARIABLE/////////////////////////////////
// BUILT-IN--int,float,char,double,bool
// USER DEFINED-
// DERIVED

////////////////////////BUILT-IN////////////////////////////////
// int-01,2304343
// float-decimal number of low precision
// char-single alphabets
// double-high precision decimal numbers
// bool-true or false.

//////////////////////////////USER DEFINED
// struct
// union
// enum

//////////////////////////////DERIVED DATA TYPE
// Array
// functions
// pointers

#include <iostream>
using namespace std;

int glo = 6;

void sum()
{
    int a;
    cout << glo << endl;
}

int main()
{
    int glo = 10;
    glo = 1001;
    // int a = 4;
    // int b = 5;
    int a = 4, b = 5;
    float pi = 3.14;
    char c = 'u';
    bool isTrue = false;
    sum();
    cout << glo << "\n";
    cout << "This is data type learning \n"
         << "value of a is " << a << "\nthe value of b is "
         << b << endl;
    cout << "the value of pi is " << pi << "\n";
    cout << "the value of c is " << c << "\n";
    cout << "the value of bool variable is " << boolalpha << isTrue << "\n";
}



///////////////////rules to declare variables
//1.variable name must range from 1 to 255
//2.must be start with alphabets or underscore
//3.after starting can add letter or numbers
//4.variable are case sensitive
//5.no space of special keyword
//6. cant use c++ keywords as a variable name