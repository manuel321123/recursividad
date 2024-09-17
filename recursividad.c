#include <stdio.h>

void decimalABinario(int n) {
    if (n == 0)
    {
        return;
    }
    decimalABinario(n/2); 
    printf("%d", n % 2);   //modulo que devuelve un valor a 0 cuando es par y 1 cuando es impar booleano
}

int main(){
    int num = 0;

    printf("Numero a convertir");
    scanf("%d", &num);

    printf("La representacion binaria de %d es: ", num);
    decimalABinario(num);
    printf("\n");

   
    return 0;
}