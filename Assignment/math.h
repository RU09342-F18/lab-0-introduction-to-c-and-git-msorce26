/*
 * math.h
 *
 *  Created on: Aug 22, 2017
 * 	Last Edited: Sept 7, 2018
 *      Author: Russell Trafford
 */

/* Your assignment is to take the math function and implement at least the following functions:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
*/

//code to state that this .h file will define the functions for the class math.c
#ifndef MATH_H_
#define MATH_H_

//functoion definition for add (requires parameters: 2 doubles, returns a double)
double add(double a, double b);

//functoion definition for subtract (requires parameters: 2 doubles, returns a double)
double subtract(double a, double b);

//functoion definition for multiply (requires parameters: 2 doubles, returns a double)
double multiply(double a, double b);

//functoion definition for divide (requires parameters: 2 doubles, returns a double)
double divide(double a, double b);

//functoion definition for modulus (requires parameters: 2 ints, returns an int)
int modulus(int a, int b);

//functoion definition for bitwise rightshift (requires parameters: 2 ints, returns an int)
int rightshift(int num, int s_amount);

//functoion definition for bitwise leftshift (requires parameters: 2 ints, returns an int)
int leftshift(int num, int s_amount);

//functoion definition for bitwise AND (requires parameters: 2 ints, returns an int)
int AND(int a, int b);

//functoion definition for bitwise OR (requires parameters: 2 ints, returns an int)
int OR(int a, int b);

//functoion definition for bitwise XOR (requires parameters: 2 ints, returns an int)
int XOR(int a, int b);

//functoion definition for bitwise inverse (requires parameters: 1 int, returns an int)
int inverse(int a);

//ends function definitions
#endif /* MATH_H_ */
