#include <stdio.h>
#include <stdlib.h>

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0; 
    }
    return (float)a / b ;
}

int main() {
    int num1 = 10, num2 = 5;
    float result;
    result = divide(num1, num2);
    printf("Result: %.2f\n", result);
    return 0;
}

