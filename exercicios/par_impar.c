// Identificar se o n�mero digitado � par ou �mpar

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
    int num;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("O n�mero %d � par.\n", num);  
    } else {  
        printf("O n�mero %d � �mpar.\n", num);  
    }  
    
    return 0;  
}