// Escreva um programa que leia dois n�meros inteiros digitados pelo usu�rio e exiba a soma deles

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
    int n1, n2;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);
    
    printf("A soma dos n�meros �: %d", n1 + n2);

    return 0;
}