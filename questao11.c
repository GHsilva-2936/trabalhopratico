#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2, n, i, valorTermo;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    n = 10;

    printf("[%d]\n", num1);
    printf("[%d]\n", num2);

    for(i = 3; i <= n;i++){
        if(i % 2 == 0){
            valorTermo = num2 - num1;
        }
        else{
            valorTermo = num2 + num1;
        }
        
        printf("[%d]\n", valorTermo);
        num1 = num2;
        num2 = valorTermo;
    }

    return 0;
}
