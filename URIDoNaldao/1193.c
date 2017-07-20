#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
    char tipo[3];
    char numero[255];
    char num[255];
    int n;
    int cont;
    int dec;
    int i;
    int k;
    int j;
    int l;
    int len;
    char temp;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
            scanf("%s %s", &numero, &tipo);
            if(!strcmp(tipo,"bin")){
                    printf("Case %d:\n", i+1);
                    cont = 0;
                    dec = 0;
                    len=strlen(numero);
                    for (l=0;l<(len/2);l++)
                    {
                            temp=numero[l];
                            numero[l]=numero[len-l-1];
                            numero[len-l-1]=temp;
                    }
                    
                    while(numero[cont] != '\0'){
                                dec += (numero[cont] - 48)*pow(2,cont);
                                cont++;
                    }
                    printf("%d dec\n",dec);
                    printf("%x hex\n",dec);
                    
            } else if(!strcmp(tipo, "dec")){
                   
                   printf("Case %d:\n", i+1);
                   cont = 0;
                   dec = 0;
                   
                   float f = atof(numero);
                   dec = f;
                   
                   char bin[50];
                   cont = 0;
                   
                   printf("%x hex\n",dec);
                   while(dec/2 != 0)
                   { 
                      bin[cont] = dec%2+48;  dec /= 2; cont++; 
                   }
                   bin[cont] = dec%2+48;
                   for(j = cont; j >= 0; j--)
                    { 
                      printf("%c", bin[j]); 
                    }
                   printf(" bin\n");
                   
            } else if(!strcmp(tipo, "hex")){
                   printf("Case %d:\n", i+1);
                   cont = 0;
                   dec = 0;
                   len=strlen(numero);
                    for (l=0;l<(len/2);l++)
                    {
                            temp=numero[l];
                            numero[l]=numero[len-l-1];
                            numero[len-l-1]=temp;
                    }
                   while(numero[cont] != '\0'){
                               if(numero[cont] >= 97)
                               {
                                  dec += (numero[cont] - 87)*pow(16,cont);
                               }
                               else
                               {
                                  dec += (numero[cont] - 48)*pow(16,cont);
                               }
                               cont++;
                   }
                   
                   
                   char hex[50];
                   cont = 0;
                   printf("%d dec\n",dec);
                   while(dec/2 != 0){                 
                             hex[cont] = dec%2+48;
                             dec /= 2;
                             cont++;
                   }
                   hex[cont] = dec%2+48;
                   for(k = cont; k >= 0; k--)
                    { 
                      printf("%c", hex[k]); 
                    }
                   printf(" bin\n");
            }
             memset(numero, 0, sizeof numero);
             memset(tipo, 0, sizeof tipo);
    }
    printf("\n");
    return 0;
}
