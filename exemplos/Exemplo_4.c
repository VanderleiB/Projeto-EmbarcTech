/*
06 - Escreva um programa que leia um n�mero inteiro maior do que zero e dentro do intervalo entre 100 e 999. Em seguida, informe a soma de
todos os seus algarismos. Por exemplo, voc� digitou 135 , ent�o o resultado da soma deve ser 1 + 3 + 5 = 9. Se o n�mero lido n�o for maior
do que zero, o programa terminar� com a mensagem "N�mero inv�lido
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int soma_digitos(int numero) {

    system("cls");
    setlocale(LC_ALL, "Portuguese_Brazil");

    int soma = 0, digito;
    while (numero > 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }
    return soma;
}
546
int main() {
    int numero;

    printf(" Digite um n�mero inteiro entre 100 e 999: ");
    scanf("%d", &numero);

    if (numero > 0 && numero < 1000) {
        int resultado = soma_digitos(numero);
        printf("A soma dos d�gitos �: %d\n", resultado);
    } else {
        printf("N�mero inv�lido.\n");
    }
}
