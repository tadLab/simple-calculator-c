/**
 * @file calculator.c
 * @brief Simple calculator program with basic operations.
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * @brief Perform arithmetic operations on two numbers.
 * 
 * This function performs addition, subtraction, multiplication,
 * or division on two integers based on the provided operation.
 * 
 * @param a The first operand.
 * @param b The second operand.
 * @param operation The operation to perform (+, -, *, /).
 * @return The result of the operation.
 */


int operations(int a, int b, char operation){

    switch (operation)
    {
    case '+':
        return a+b;
        break;
    case '-':
        return a-b;
        break;
    case '*':
        return a*b;
        break;
    case '/':
        if(a == 0 || b == 0){
            printf("Division by zero is forgotten!");
        } else {
            return a / b;
        }
    default:
        printf("Invalid operation, please provide a real one.");
        break;
    }

    return 0;

}

/**
 * @brief Display a manual for using the calculator program.
 */

void manual(){

    printf("   # PLEASE PROVIDE TWO NUMBERS (A, B) #\n");
    printf("# THEN CHOOSE YOUR OPERATION (+, -, *, /) #\n");
    printf("        # (A OPERATION B) = ANS #\n");

}

/**
 * @brief Main function to run the calculator program.
 */

int main(int argc, char const *argv[])
{

    int a, b;
    char operation;

    manual();
    scanf("%d %d %c", &a, &b, &operation);

    int result = operations(a,b,operation);

    printf("%d %c %d = %d\n", a, operation, b, result);

    return 0;
}
