// Escreva um programa que exiba todos os n�meros de 1 a 100, exceto os m�ltiplos de 3.

#include <stdio.h> 
#include <locale.h> 

int main() {  

    setlocale(LC_ALL, "Portugues_Brazil");
    
    for (int i = 1; i <= 100; i++) {  
         
        if (i % 3 != 0) {  
            printf("%d\n", i);  
        }  
    }  
    
    return 0;  
}