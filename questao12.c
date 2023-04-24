#include <stdio.h>
#include <math.h>

float series(int n){
    if (n > 0)
        return (1+n*n)/(float)n + series(n-1);
    else
        return 0;
}

int main()
{
    printf("S = %f\n", series(10));
    system("pause");
    return 0;
}
