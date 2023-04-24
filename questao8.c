#include <stdio.h>

int main(){

    int sigla;

    printf("1 - AM \n");
    printf("2 - RJ \n");
    printf("3 - PA \n");
    printf("4 - AC \n");
    printf("Informe seu estado pelo numero da sigla: ");
    scanf("%i", &sigla);

    switch(sigla){
    case 1:
        printf("Amazonense");
    break;
    case 2:
        printf("Carioca");
    break;
    case 3:
        printf("Paraense");
    break;
    case 4:
        printf("Acreano");
    break;

    default:
        printf("numero invalido! \n");
    }

return 0;
}
