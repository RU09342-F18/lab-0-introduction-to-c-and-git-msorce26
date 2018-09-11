Readme for math.c and math.h file

CODE written by Michael Sorce on 9/9/18

last updated: 9/10/18

dependent on libraries: math.h, stdio.h

***math.h***

-The math.h header file provides the outline for the math.c file. It defines the math function that will be written in the math.c file. The math function will accept 3 parameters:(int, int, char). The two ints represent the numbers that the operation will be performed on. The char represents the operand, which is used to specify what operation will be performed on the two input ints. The function will return (output) a single int value which will represent the result of the operation.

-The following lists the operations that the math class will be able to perform as shown in the comments of the math.h file: add, subtract, multiply, divide, modulus, bitwise AND, bitwise OR, bitwise XOR, and bitwise inverse.


***math.c***

-The math.c file provides the operational code as outlined in the math.h file.

-All functions listed about are restated and defined with its specified operable code

-the following list the code definitions (using example numbers) for the functions specified in the math.h file (in the same order as listed above). All return a single int value.

      add- return 1 + 2
      subtract - return 1 - 2
      multiply - return 1 * 2
      divide - return 1 / 2
      modulus - return 1 % 2
      bitwise AND - return 1 & 2
      bitwise OR - return 1 | 2
      bitwise XOR - return 1 ^ 2
      bitwise inverse - return ~1;
