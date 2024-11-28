#include <stdio.h>
#include <math.h>


int flip(int number, int n) {
    int divisor = pow(10, n); 
    int remainder = number % divisor; 
    int flipped = 0;
    while (remainder > 0) {
        flipped = flipped * 10 + remainder % 10;
        remainder /= 10;
    }

    return (number / divisor) * divisor + flipped;
}

int main() {
    int number, n;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the number of digits to flip (n): ");
    scanf("%d", &n);
    int result = flip(number, n);
    printf("Result after flipping the last %d digits: %d\n", n, result);

    return 0;
}

