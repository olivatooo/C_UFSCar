#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    float M[12][12], soma=0, media;
    int i,j, L;
    char letra;
 
    printf("Primeiro, digite a linha desejada da matriz: \n");
    scanf("%d",&L);
 
    printf("Agora, escolha uma opcao conforme o desejado:\n");
    printf("S - Caso deseje realizar a soma dos elementos\n");
    printf("M - Caso deseje realizar a média dos elementos\n");
 	fflush(stdin);
    scanf("%c",&letra);
    fflush(stdin);
    printf("Por fim, digite os valores:\n");
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%d",&M[i][j]);
    }
    }
 
    if (letra == 'S'){
        for(i=0;i<11;i++){
        soma += soma + M[L][i];
        }
 
        printf("A soma dos valores vale %.1f\n",soma);
    }
 
    if (letra == 'M'){
        for(i=0;i<11;i++){
        soma = soma + M[L][i] + M[L][i+1];
        }
        media = soma/12;
        printf("A media vale %.1f",media);
    }
}
