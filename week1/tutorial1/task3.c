#include <stdio.h>


int findprime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}

int findsquare(int num) {
    
    return num * num;
}

int main() {
    int num = 1024;
    int temp = num;
    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10; 
        sum += findsquare(digit); 
        temp /= 10; 
    }
    printf("Sum of squares of digits of %d is %d\n", num, sum);

    if (findprime(sum)) {
        printf("%d is a prime number.\n", sum);
    } else {
        printf("%d is not a prime number.\n", sum);
    }
    return 0;
}
