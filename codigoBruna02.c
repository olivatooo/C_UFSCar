#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int N;
    char st1[50], st2[50], result[100], *p, *q, *r;
 
    printf("Informe a quantidade de casos de teste desejados: \n");
    scanf("%d",&N);
 
    while(N != 0){
    printf("Agora, digite as duas cadeias de caracteres: \n");
    scanf("%s",st1);
    scanf("%s",st2);
 
    p=st1;
    q=st2;
    r=result;
 
    while(*p != '\0' && *q != '\0'){
        *r=*p;
        p++;
        r++;
        *r=*q;
        q++;
        r++;
    }
 
    if(*p == '\0'){
        while(*q != '\0'){
        *r=*q;
        r++;
        q++;
    }
 
    if(*q == '\0'){
        while(*p != '\0'){
        *r=*p;
        r++;
        p++;
    }
    }
    }
 
    printf("%s\n\n\n",result);
        N--;
    }
    return 0;
}
