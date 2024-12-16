// Escreva um programa que leia um número e exiba sua tabuada de 1 a 10.

#include <stdio.h>
#include <locale.h>  

int main() { 

    setlocale(LC_ALL, "Portuguese_Brazil");

    int numero; 
     
    printf("tabuada de 1 a 10 \n");  
    printf("Digite um n�mero para saber a sua tabuada: ");  
    scanf("%d", &numero);  
 
    for (int i = 1; i <= 10; i++)
    {
      printf(" %d X %d : %d \n", numero, i, numero*i);
    }
    
    return 0;  

}