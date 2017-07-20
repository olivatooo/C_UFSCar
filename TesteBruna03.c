 //essa função faz com que valor1 = VALOR DE a ; GUARDAR ENDEREÇO DE b, OU SEJA, SE MUDAR VALOR DE b AQUI, MUDARÁ NO MAIN TBM
int soma(int valor1, int *valor2)
{
    valor1=200;
    return valor1+*valor2; //SOMA DE valor1 = VALOR DE a com VALOR GUARDADO NA VARIÁVEL QUE valor2 aponta = VALOR DE b
}
 
int main()
{
    int a, b, c;
    a = 20; //declarei que a vale 20
    b = 15; //declarei que b vale 15
    printf("Valor de a = %d\n",a);
    printf("Valor de b = %d\n",b);
 
    soma(a,&b); //estou chamando uma função chamada soma e dando a ela o VALOR DE A e o ENDEREÇO DE B
    printf("Soma antes de mudar b = %d\n\n",soma(a,&b));
 
    b=45; //altero b aqui e ELE É ALTERADO AUTOMATICAMENTE NA FUNÇÃO SOMA PQ EU PASSEI O ENDEREÇO DE b
 
    printf("A soma vale %d\n",soma(a,&b));//será a soma de a com O NOVO VALOR DE b
    printf("Valor de a = %d\n",a);
    printf("Valor de b = %d\n",b);
 
 
 
    return 0;
}
