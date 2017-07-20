#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int N, pos;
    char cod[55], decod[55], *p;
 
    printf("Digite a quantidade de casos de teste: \n");
    scanf("%d",&N);
 
    while(N != 0){
    printf("Digite o codigo: \n");
    scanf("%s",cod);
 
//Aqui você não usa o &
    p=&cod;
 
    printf("Agora, digite a quantidade de casas que deseja andar: \n");
    scanf("%d",&pos);
 
    while(pos<=0 || pos>=25){
        printf("Agora, digite a quantidade de casas que deseja andar: \n");
        scanf("%d",&pos);
    }
 // Os valores na tabela ascii vão de 65 até 90
 // Você precisa fazer a seguinte checagem
 /*
 Nesse caso eu tô criptografando, ou seja, tô SOMANDO, no seu caso pra descriptografar você precisa subtrair
 */
    while (*p != '\0'){
		if((*p-pos)<65)
	    {
	      *p=90+((*p+pos)-65);
	    }
	      else
	    {
	      *p-=pos;
	    }
		p++
    }
 
    printf("A frase original eh: \n");
    printf("%s\n\n",cod);
 
    N--;
    }
}
