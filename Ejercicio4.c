#include <stdio.h>
#include <stdlib.h>

void main()
{
    int Num1=0, I=0, Fact=1;

    printf("Escribe un numero para calcular su factorial\n");
    scanf("%d", &Num1);
    system ("cls");


    for (I=Num1;I>1;I--){
    Fact=Fact*I;
}
    printf("El factorial de %d = %d\n", Num1, Fact);
}
