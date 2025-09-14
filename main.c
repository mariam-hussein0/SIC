#include <stdio.h>
#include "header.h"


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


int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Result of subtraction: %d\n", subtract(x, y));
    return 0;
}

float add (float x, float y){
	float sum =x+y;
	return sum;
}

