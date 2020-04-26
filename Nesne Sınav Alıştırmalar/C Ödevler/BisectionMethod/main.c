// Emre �zdemir 340824
// Assignment 2: Bisection metod ile k�k bulma

#include <stdio.h>
#include <math.h>

int main() {
	float x1,x2,x3;								//Burada de�i�kenleri tan�ml�yoruz.
	float hata_payi,sabit;
	float sayi=0,a,toplam=0;
	float f,f2;
	float b,c;
	float min,max;
	min=0;
	max=0;
	printf("Gireceginiz denklem asagidaki gibi 3. dereceden bir denklem olmali.\n");
	printf("Ax^3 + Bx^2 + Cx+ D\n\n");
	printf("A,B,C denklemin kat sayilari ve D sabit olup asagida girmeniz istenecektir!\n\n");
	printf("Simdi kat sayilari giriniz.\n\n");

	printf("X'in 3. dereceden katsayisi:"); 	//Tan�mlanan de�i�kenlere kullan�c�dan denklemin katsay�lar�n� ve sabit say�y� istiyoruz.
	scanf("%f",&x3);
	printf("X'in 2. dereceden katsayisi:");
	scanf("%f",&x2);
	printf("X'in 1.dereceden katsayisini:");
	scanf("%f",&x1);
	printf("Sabit sayi:");						//Kullan�c�dan hata pay�, minimum ve maximum aral�klar� kullan�c�dan istiyoruz.
	scanf("%f",&sabit);
	printf("Hata payini giriniz:");
	scanf("%f",&hata_payi);
	if(hata_payi==0) //hata pay�n�n 0 girilmesinin engelliyoruz.
				{
					printf("Hata payi 0 olamaz");
				}
				else
				{
	printf("maximum deger: ");
	scanf("%f",&max);
	printf("minimum deger: ");
	scanf("%f",&min);
			if(min>=max)							//Minimum ve maximum aral�klar�n�n do�ru bir �ekilde girilmesinin kontrol�n� ger�ekle�tiriyoruz.
			{
				printf("max ve min degerleri ters girilmistir.");
			}
			else
			{
				a=max-min;							// a say�s� max-min olarak tan�mlan�yor aral��� k���kltmek a��s�ndan
				sayi=(max+min)/2;					//Bisection metodunda verilen max ve min de�erlerin toplam�n�n ortalamas� al�n�yor.
			int i;
			for(i=0;i<=1;i++)						//Girilen de�erlerin aral���nda k�kler mevcut olup olmad���n�n kontrol� yap�l�yor.
			{
				if(i==0)
				{
					f2=x3*(pow(min,3))+x2*(pow(min,2))+x1*min+sabit;	// Girilen say� aral�klar�n�n fonksiyonda ki sonu�lar�n� al�yoruz.
					b=f2;

				}
				else if(i==1)
				{
					f2=x3*(pow(max,3))+x2*(pow(max,2))+x1*max+sabit;
					c=f2;
				}
			}
			if(b*c>0)					// Bu ald���m�z sonu�lar�n �arp�m� s�f�rdan b�y�k yani pozitif ise girilen aral�kta k�k olmad��� anlam� ta��yor.
			{
				printf("Bu aralikta kok yoktur.");
			}
			else
			{
				for(;a>hata_payi;)			//K�k�n belirli bir hata pay� ile hesaplanmas� i�lemi burada ger�ekle�tiriliyor.
				{
					f=x3*(pow(sayi,3))+x2*(pow(sayi,2))+x1*sayi+sabit;
					if(f<0)
					{
						min=sayi;
						a=max-min;		// Fonksiyonda min de�eri girildi�inde sonu� negatif ��k�yor ise onu say�ya'ya at�yoruz.
					}					// ve a=max-min yaparak k�k aral���n� daralt�p sonuca varmaya �al���yoruz.
					else if(f>0)
					{
						max=sayi;
						a=max-min;			// Fonksiyonda max de�eri girildi�inde sonu� pozitif ��k�yor ise max de�erini say�ya at�yoruz.
					}						// burada da ayn� �ekilde a'� k���lterek sonuca varmaya �al���yoruz.
						sayi=(min+max)/2;	// sayi her i�lem sonunda maximum ve minimum de�erinin yar�s�n� al�r.
				}

    	printf("Denkleminizin koku: %.2f",sayi);		// Bulunan k�k�n ekrana ��kt�s�
    		}
		}
	}
	return 0;
}
