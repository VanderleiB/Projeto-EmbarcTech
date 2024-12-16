// Crie um programa que leia três notas de um aluno e calcule a média aritmética

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    
    if(media >= 7){
       printf("Aprovado");
    }
    else if(media >=6){
        printf("Recuperação");
    }

    else if(media >=5){
        printf("Reprovado");
    }

    return 0;
}