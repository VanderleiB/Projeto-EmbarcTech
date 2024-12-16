// Crie um programa que calcule o fatorial de um n�mero inteiro fornecido pelo usu�rio.

#include <stdio.h>
#include <locale.h>  

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numero;  
    unsigned long long fatorial = 1; 

    
    printf("Digite um n�mero inteiro para saber o fatorial:");  
    scanf("%d", &numero);  

     
    if (numero < 0) {  
        printf("N�mero inv�lido(n�o permitido n�meros negativos)\n");  
    } else {  
         
        for (int i = 1; i <= numero; i++) {  
            fatorial *= i; 
        }  
       
        printf("O fatorial de %d é &ull \n", numero, fatorial);  
    }  
    
    return 0;  
}