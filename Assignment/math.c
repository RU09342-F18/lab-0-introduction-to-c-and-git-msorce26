//includes header file math.h
//necessary to define functions of math.h file
#include "math.h"

//returns the sum of two doubles
double add(double a, double b)
{
    return a + b;
}

//returns the difference of two doubles
double subtract(double a, double b)
{
    return a - b;
}

//returns the product of two doubles
double multiply(double a, double b)
{
    return a * b;
}

//returns the quotient of two doubles
double divide(double a, double b)
{
    return a / b;
}

//returns the remainder of the value of a/b
int modulus(int a, int b)
{
    return a % b;
}

//shifts the value 'num' to the right 's_amount' times
int rightshift(int num, int s_amount)
{
    return num >> s_amount;
}

//shifts the value 'num' to the left 's_amount' times
int leftshift(int num, int s_amount)
{
    return num << s_amount;
}

//returns the bitwise AND result of the two value input
int AND(int a, int b)
{
    return a & b;
}

//returns the bitwise OR result of the two value input
int OR(int a, int b)
{
    return a | b;
}

//returns the bitwise XOR result of the two value input
int XOR(int a, int b)
{
    return a ^ b;
}

//returns the bitwise inverse of the value input
int inverse(int a)
{
    return ~a;
}
