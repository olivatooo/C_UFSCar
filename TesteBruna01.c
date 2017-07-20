#include <stdio.h>
#include <stdlib.h>
 
void troca(int *a, int *b)
{
    int *x;
    int *y;
    int *z;
    int aux;
    x = a;
    y = b;
    z = &aux;

    *z = *x;
    *x = *y;
    *y = *z;
}
 
int main()
{
    int a, b;
 
    printf("Troca com funcoes!\n");
 
    a = 20;
    b = 40;
 
    troca(&a,&b);
    printf(" a = %d\n",a);
    printf(" b = %d\n",b);
 
 
    return 0;
}
