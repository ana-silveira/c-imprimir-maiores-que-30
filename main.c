/*
48. Entrar com 15 n�meros e imprimir a quantidade de n�meros maiores que 30 que
foram digitados
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int numero;
    int contador = 0;

    for ( int i = 1; i <= 15; i++) {
        printf("Informe o n�mero %d: ", i);
        scanf("%d", &numero);
        if (numero > 30)
            contador++;
        }

    printf("\n O n�meros de valores maiores que 30 � %d ", contador);

}
