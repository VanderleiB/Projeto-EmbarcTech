// Identificar se o número digitado é par ou ímpar

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("O número %d é par.\n", num);  
    } else {  
        printf("O número %d é í­mpar.\n", num);  
    }  
    
    return 0;  
}