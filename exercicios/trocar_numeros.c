// Escreva um programa que leia dois nÃºmeros inteiros e troque seus valores sem usar variáveis auxiliares.

#include <stdio.h>
#include <locale.h>  

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    int num1, num2;  

     
    printf("Digite o primeiro número inteiro\n");  
    scanf("%d", &num1);  
    printf("Digite o segundo número inteiro\n");  
    scanf("%d", &num2);  
    
   
    printf("Antes da troca: \nnúmero 1 = %d \nnúmero 2 = %d\n", num1, num2);  

     
    num1 = num1 + num2; 
    num2 = num1 - num2; 
    num1 = num1 - num2; 

    printf("Depois da troca:\nnúmero 1 = %d\nnúmero 2 = %d\n", num1, num2);  

    return 0;  
}