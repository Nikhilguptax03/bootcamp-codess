#include <stdio.h>

int main() {
    int num, sum = 0, product = 1, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &num);


    temp = num; 

    while (temp != 0) {
        digit = temp % 10; 
        sum += digit;      
        product *= digit; 
        temp /= 10;      
    }

    if (sum == product) {
        printf("%d is a spy number.\n", num);
    } else {
        printf("%d is not a spy number.\n", num);
    }

    return 0; 
}