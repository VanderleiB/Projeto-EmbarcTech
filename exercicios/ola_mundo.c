// Ser� exibido a mensagem Ol� mundo na tela

#include <stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Ol� mundo!");
}