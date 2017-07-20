#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    FILE *fp;
 
    fp = fopen("Alunos e suas notas.txt", "w"); //fopen abre o arquivo no comp, cria ele
 
    if (fp == NULL)
    {
        printf("Não é possível abrir");
        exit(1);
    }
 
    fprintf(fp,"Amanda | 10\n");
    fprintf(fp,"Beatriz | 7\n");
    fprintf(fp,"Carlos | 6\n");
 
    fclose(fp);
    printf("Conseguiiiiii");
    return 0;
}
