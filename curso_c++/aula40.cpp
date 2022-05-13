#include <iostream>
#include <stdio.h>

int main() {

    int num1 = 1, num2 = 2, num3 = 3;
    char nome1[10];

    nome1[0] = 'B';
    nome1[1] = 'r';
    nome1[2] = 'u';
    nome1[3] = 'n';
    nome1[4] = 'o';

    printf("Hello\n\0 World\n"); // \0 é o caracter delimitador
    printf("Valor das variaveis: %d %d %d\n", num1, num2, num3);

    printf("Valor da variavel: %d\n%s\n", num1, nome1);

    int num4, num5, num6;
    scanf("%d %d %d", &num4, &num5, &num6);

    printf("\n\n\nValor das variaveis: %d %d %d", num4, num5, num6);

    return 0;
}

/*
d, i => int
x, X => Hexadecimal
u => int sem sinal
s => string, char
f => double, float
p => ponteiros
*/