#include "logicClass.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cstdlib> //atoi i�in
using namespace std;


logicClass::logicClass()
{


}
void logicClass::print() const {

 }


void logicClass::seperate(string words[100]) {
	//Dizi icerigi " " karakteri ile dolduruldu
	for (int i = 0; i < 100; i++) {
		words[i] = " ";
	}
	fstream oku("Circuit.txt");
	char satir[100]; // char yap�lmas�n�n nedeni strtok fonksiyonunun char ile �al��mas�ndan kaynakl�d�r.

					 //Okunan satirdaki kelimeleri string diziye aktar�yorum.
	char *p;
	int l = 0; // k ve l de�erleri dizide yaz�lacak yerler icin tam�mland�
	if(oku==NULL){
        cout<<"dosya yok"<<endl;
        ::getchar();
	}
    else{
	while (oku.getline(satir, 100)) {
		if (satir[0] == NULL) break;
		else {
			p = strtok(satir, " "); // " " karakterine g�re ay�rma yap�yor.
			while (p != NULL) {
				words[l] = p; //dizi icerigine kelime atamas�
				p = strtok(NULL, " ");
				l++;
			}
		}
		words[l] = "\n";	l++;
	}
	//diziye aktarma i�lemi biti�i
}}

logicClass::~logicClass()
{
}
