// 02_variables.c
// Understanding variables and data types in C

#include <stdio.h>

int main() {
    int age = 20;               // integer variable
    float height = 5.9;         // float variable (decimal number)
    char grade = 'A';           // character variable
    double pi = 3.1416  // double precision float

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height); // %.2f means show only 2 decimals
    printf("Grade: %c\n", grade);
    printf("PI value: %lf\n", pi);

    return 0;
}

