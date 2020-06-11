#include <stdio.h>

int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int main(int argc, char** argv) {
    
    int n = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    int fact = fibonacci_naive(n);
    printf("Factorial of %d is %d\n: ", n, fact);

    return 0;
}
