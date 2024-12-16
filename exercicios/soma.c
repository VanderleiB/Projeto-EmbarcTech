// Escreva um programa que leia dois números inteiros digitados pelo usuário e exiba a soma deles

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    printf("A soma dos números é: %d", n1 + n2);

    return 0;
}