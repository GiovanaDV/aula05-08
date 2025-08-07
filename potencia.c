#include <stdio.h>

int potencia(int base, int expoente) {
    if (expoente == 0) return 1; // caso base
    return base * potencia(base, expoente - 1); // chamada recursiva
}

int main() {
    int base;
    int expoente;
    printf("Digite a base: ");
    scanf("%i", &base);
    printf("Digite o expoente: ");
    scanf("%i", &expoente);
    printf("Potencia de %d = %d", base, potencia(base, expoente));
    return 0;
}




