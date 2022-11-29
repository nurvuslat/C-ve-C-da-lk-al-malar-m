#include<stdio.h>
main(){
	char k;
	char metin[20];
	int sayi1;
	float sayi2;
	double sayi3;
	
	printf("Bir Karekter Girin:");
	scanf("%c", &k);
	printf("Bir Metin Giriniz:");
	scanf("%s", &metin);
	printf("Bir Tamsayi Giriniz:");
	scanf("%d", &sayi1);
	printf("Float Tipinde Bir Sayi Giriniz:");
	scanf("%f", &sayi2);
	printf("Double Tipinde Bir Sayi Giriniz:");
	scanf("%lf", &sayi3);
	
	printf("%c\n", k);
	printf("%s\n", metin);
	printf("%d\n", sayi1);
	printf("%.2f\n", sayi2);
	printf("%.2lf\n", sayi3);
}
