#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade, sexo, olhos, cabelo, i;

    for(i = 1; i <= 0; i+=1){
    printf("1 - Masculino");
    printf("2 - Feminino");
    printf("sexo: ");
    scanf("%d", &sexo);
    printf("1 - Azuis");
    printf("2 - Verdes");
    printf("3 - Castanhos");
    printf("Cor dos olhos: ");
    scanf("%d", &olhos);
    printf("1 - Louros");
    printf("2 - Castranhos");
    printf("3 - Pretos");
    printf("Cor do cabelo: ");
    scanf("%d", &cabelo);
    printf("idade: ");
    scanf("%d", &idade);
    }

    if(idade>18){
    printf("Maior idade é %d", &idade);
}else{
    printf("Menor de idade");
}

}
