// Escreva um programa que leia dois números inteiros e troque seus valores sem usar vari�veis auxiliares.

#include <stdio.h>
#include <locale.h>  

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    int num1, num2;  

     
    printf("Digite o primeiro n�mero inteiro\n");  
    scanf("%d", &num1);  
    printf("Digite o segundo n�mero inteiro\n");  
    scanf("%d", &num2);  
    
   
    printf("Antes da troca: \nn�mero 1 = %d \nn�mero 2 = %d\n", num1, num2);  

     
    num1 = num1 + num2; 
    num2 = num1 - num2; 
    num1 = num1 - num2; 

    printf("Depois da troca:\nn�mero 1 = %d\nn�mero 2 = %d\n", num1, num2);  

    return 0;  
}