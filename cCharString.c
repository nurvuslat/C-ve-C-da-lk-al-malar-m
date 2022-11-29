#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Turkish");
	char k = 65;
	printf("%c", k);
	char c[20] = " Sen de mi Brütüs!";
	printf("%s", c);
}

