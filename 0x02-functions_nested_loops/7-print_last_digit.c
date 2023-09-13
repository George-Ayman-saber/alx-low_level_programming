#include <stdio.h>
#include "main.h"

int print_last_digit(int number) {

    int last_digit = number % 10; // Use modulo to get the last digit

    if (last_digit < 0) { // Make sure the last digit is non-negative

        last_digit = -last_digit;

    }

    printf("%d\n", last_digit);

    return last_digit;

}
