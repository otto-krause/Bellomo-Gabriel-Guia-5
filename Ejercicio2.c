#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmro=0, I=0, promedio=0, suma=0, mayor=0, nmro_total=0, prom=0;
            system ("cls");
            for (I=0;I<15;I++) {
            printf("  El numero %d es: ",I+1);
            scanf("%d", &nmro);
            if (mayor<nmro)
            mayor=nmro;
            nmro_total=15*nmro;
            suma=suma+nmro_total;
            }
        promedio=suma/15;
        prom=promedio/15;
        printf("El numero promedio es: \n%d\n", prom);
        printf("El numero mas grande es: \n%d\n", mayor);

}
