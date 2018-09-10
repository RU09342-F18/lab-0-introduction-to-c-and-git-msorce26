Readme for math.c and math.h file

CODE written by Michael Sorce on 9/9/18
last updated: 9/9/18

math.h
-The math.h header file provides the outline for the math.c file. It lists the functions that will be defined in the math.c file, as well as the parameters each function will accept. This also specifies the data type each function will return (such as an int or double) in the beginning of each function statement. i.e: double add(int a, int b); double is the return type.

-The following lists the functions specified in the math.h file: add, subtract, multiply, divide, modulus, bitwise AND, bitwise OR, bitwise XOR, and bitwise inverse.

-all bitwise functions return ints (all accept 2 int parameters ***excepts inverse***)
-add, subtract, multiply, and divide return doubles (each except 2 double parameters)
-modulus returns an int (accepts 2 ints)
***exception*** - inverse accepts 1 int parameter and returns an int

math.c
-The math.c file defines the functions outlined by the math.h file.
-All functions listed about are restated and defined with its specified operable code
-the following list the code definitions (using example numbers) for the functions specified in the math.h file (in the same order as listed above)
      add- return 1 + 2
      subtract - return 1 - 2
      multiply - return 1 * 2
      divide - return 1 / 2
      modulus - return 1 % 2
      bitwise AND - return 1 & 2
      bitwise OR - return 1 | 2
      bitwise XOR - return 1 ^ 2
      bitwise inverse - return ~1;
