#include<iostream>
#include<iomanip>
using namespace std;
main(){
double sayi, toplam;
sayi = 1.0 / 81;
for(int i =0; i < 729; i++)
toplam = toplam + sayi;
cout << setprecision(10) << toplam;
}
