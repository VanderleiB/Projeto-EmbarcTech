#include <stdio.h>
#include <locale.h>  

int main() { 

    setlocale(LC_ALL, "Portuguese_Brazil");

    int numero;  
    int i = 0;  
    
    while (1) {  
        printf("Digite um número inteiro (0 para sair): \n");  
        scanf("%d", &numero);  
         
        if (numero == 0) {  
            break;  
        }  
        
        i++;  
    }  

    printf("Voce digitou %d números.\n", i);  

    return 0;  
}