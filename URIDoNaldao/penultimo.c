
#include <stdio.h>
#include <string.h>
int main()
{
    char x[5];
    int tam;
    tam = strlen(gets(x));
    if(tam==3)
    {
        if(x[0]=='1') printf("C");
         if(x[0]=='2') printf("CC");
         if(x[0]=='3') printf("CCC");
         if(x[0]=='4') printf("CD");
         if(x[0]=='5') printf("D");
         if(x[0]=='6') printf("DC");
         if(x[0]=='7') printf("DCC");
         if(x[0]=='8') printf("DCCC");
         if(x[0]=='9') printf("CM");
         if(x[1]=='1') printf("X");
         if(x[1]=='2') printf("XX");
         if(x[1]=='3') printf("XXX");
         if(x[1]=='4') printf("XL");
         if(x[1]=='5') printf("L");
         if(x[1]=='6') printf("LX");
         if(x[1]=='7') printf("LXX");
         if(x[1]=='8') printf("LXXX");
         if(x[1]=='9') printf("XC");
         if(x[2]=='1') printf("I");
         if(x[2]=='2') printf("II");
         if(x[2]=='3') printf("III");
         if(x[2]=='4') printf("IV");
         if(x[2]=='5') printf("V");
         if(x[2]=='6') printf("VI");
         if(x[2]=='7') printf("VII");
         if(x[2]=='8') printf("VIII");
         if(x[2]=='9') printf("IX");
    }
     if(tam==2)
    {
        if(x[0]=='1') printf("X");
         if(x[0]=='2') printf("XX");
         if(x[0]=='3') printf("XXX");
         if(x[0]=='4') printf("XL");
         if(x[0]=='5') printf("L");
         if(x[0]=='6') printf("LX");
         if(x[0]=='7') printf("LXX");
         if(x[0]=='8') printf("LXXX");
         if(x[0]=='9') printf("XC");
         if(x[1]=='1') printf("I");
         if(x[1]=='2') printf("II");
         if(x[1]=='3') printf("III");
         if(x[1]=='4') printf("IV");
         if(x[1]=='5') printf("V");
         if(x[1]=='6') printf("VI");
         if(x[1]=='7') printf("VII");
         if(x[1]=='8') printf("VIII");
         if(x[1]=='9') printf("IX");
    }
     if(tam==1)
    {
        if(x[0]=='1') printf("I");
         if(x[0]=='2') printf("II");
         if(x[0]=='3') printf("III");
         if(x[0]=='4') printf("IV");
         if(x[0]=='5') printf("V");
         if(x[0]=='6') printf("VI");
         if(x[0]=='7') printf("VII");
         if(x[0]=='8') printf("VIII");
         if(x[0]=='9') printf("IX");
    }
    printf("\n");
    return 0;
}