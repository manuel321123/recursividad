#include <stdio.h>

void hanoi(int n, char origen, char destino, char intermedio) {
    if (n == 1) {
        printf("Mover disco 1 de %c a %c\n", origen, destino);
    } else {
        hanoi(n-1, origen, intermedio, destino);
        printf("Mover disco %d de %c a %c\n", n, origen, destino);
        hanoi(n-1, intermedio, destino, origen);
    }
}

int main() {
    int n;
    printf("Introduce el numero de discos: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B'); // A: origen, C: destino, B: intermedio
    return 0;
}
