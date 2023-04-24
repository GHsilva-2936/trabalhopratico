#include <stdio.h>

int main(){

    char nome[50];
    int idade;
    printf("Digite o nome do usuario ");
    scanf("%s", &nome);
    printf("Digite a idade ");
    scanf("%d", &idade);
    printf("%s", nome);
    printf(" tem %d", idade);
    printf(" anos");

    return 0;
}
