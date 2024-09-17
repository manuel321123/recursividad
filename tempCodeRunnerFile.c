#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
    
}

int main(){

    long int num = 30;
    printf("El factorial de %d es: %d\n", num, factorial(num));
    return 0;
}

