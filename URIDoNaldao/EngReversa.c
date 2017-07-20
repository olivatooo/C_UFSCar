#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
 
char digit_hex (int x) {
if (x >= 0 && x < 10)
return x+'0';
else if (x < 16)
return x-10+'a';
else
return '!';
}
 
string tobin (int x) {
string aux;
while (x > 0) {
char c = x%2+'0';
aux = c + aux;
x /= 2;
}
return aux;
}
 
void tohex (int x,char *p) {

	return aux;
}
 
int main () {
char str[50];
char type[50];
int x, n;
char hex[50];
scanf("%d",&n);
for (int i = 0; i < n; i++) 
{
	scanf("%s %s",str,type);
	printf("Case %d:");putchar('\n');
	if (type == "bin") 
	{
		x = strtol(str, 0, 2);
		//cout << x << " dec" << endl;
		printf("%d dec",x);putchar('\n');
		//cout << tohex(x) << " hex" << endl;
		//tohex(x,hex)
		while (x > 0) 
		{
			digit_hex(x%16);
			x /= 16;
		}
		printf()
	} else if (type == "dec") {
	x = strtol(str, 0, 10);
	cout << tohex(x) << " hex" << endl;
	cout << tobin(x) << " bin" << endl;
	} else {
	x = strtol(str, 0, 16);
	cout << x << " dec" << endl;
	cout << tobin(x) << " bin" << endl;
	}
	 
	cout << endl;
}
 
return 0;
}