#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    cout << "===[PROGRAM KALKULATOR BMI (C++)]===" << endl;
    float tinggi, berat;
    cout << "Masukkan tinggi(cm): ";
    cin >> tinggi;
    cout << "Masukkan berat(kg): ";
    cin >> berat;
    float hasil;
    hasil = berat/(tinggi*tinggi);
    printf("BMI anda : %.2f kg/m2\n",hasil);
    return 0;
}
