//includes header file math.h
//necessary to define functions of math.h file
#include <stdio.h>
#include "math.h"

//definition of the math function as stated in the math.h file
//accepts 2 ints as parameters
//accepts one char to represent the desired function
//returns and int which represents the result of the function
int math(int num1, int num2, char Operator)
{
    //adds the two input numbers if char '+' is input
    if(Operator == '+')
    {
        return num1 + num2;
    }

    //subtracts the two input numbers if character '-' is input
    else if(Operator == '-')
    {
        return num1 - num2;
    }

    //multiplies the two input numbers if character '*' is input
    else if(Operator == '*')
    {
        return num1 * num2;
    }

    //divides the two input numbers if character '/' is input
    else if(Operator == '/')
    {
        return num1 / num2;
    }

    //finds remainder of the first divided by the second input number if character '%' is input
    else if(Operator == '%')
    {
        return num1 % num2;
    }

    //Performs bitwise left shift of num1 by num2 times if '<' operator is input
    else if(Operator == '<')
    {
        return num1 << num2;
    }

    //Performs bitwise right shift of num1 by num2 times if '>' operator is input
    else if(Operator == '>')
    {
        return num1 >> num2;
    }

    //Performs bitwise AND of the input numbers if '&' operator is input
    else if(Operator == '&')
    {
        return num1 & num2;
    }

    //Performs bitwise OR of input numbers if '|' operator is input
    else if(Operator == '|')
    {
        return num1 | num2;
    }

    //Performs bitwise XOR of input numbers if '^' operator is input
    else if(Operator == '^')
    {
        return num1 ^ num2;
    }

    //Performs bitwise inverse of input num1 if '~' operator is input
    else if(Operator == '~')
    {
        return ~num1;
    }

    //else throws error message if invalid operator (char) is entered
    else
    {
        printf("Invalid operator input");
        return 0;
    }
}

