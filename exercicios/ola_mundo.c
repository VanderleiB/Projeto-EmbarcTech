// Será exibido a mensagem Olá mundo na tela

#include <stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Olá mundo!");
}