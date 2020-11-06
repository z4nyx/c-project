/* Multiple function of print */

// Include header file
#include <stdio.h>

// Main function
int main()
{
    math1();
    math2();
}

// Math 1
int math1()
{
    /* local variable declaration */
    int x, y, z;

    /* actual initialization */
    x = 1 + 2;
    y = x - 1;
    z = x * y;

    /* Print local variable */
    printf("Math 1: Value of x = %d, y = %d and z = %d\n", x, y, z);

    /* Return to main function */
    return 0;
}

// Math 2
int math2()
{
    /* locak variable declaration */
    int x, y, z;

    /* actual initialization */
    x = 5 - 2;
    y = x * 10;
    z = y / 2;

    /* Print local variable */
    printf("Math 2: Value of x = %d, y = %d and z = %d\n", x, y, z);

    /* Return to main function */
    return 0;
}
