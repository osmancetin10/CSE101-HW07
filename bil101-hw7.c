				/***************************/
				/*                         */
				/*      Osman Çetin        */
				/*       161044069         */
				/*          HW-7           */
				/*                         */
				/***************************/

#include <stdio.h>
/* Bu programın çalışma mantığı girdiğimiz sayının arkadaş sayısının olup olmadığını kontrol eden bir program. Arkadaş sayılardan bahsetmemiz gerekirse şu şekilde izah edebiliriz. kullanıcıdan istediğimiz sayının tam bölenlerini toplayıp x sayısı elde ederiz.daha sonra x sayısının çarpanlarını toplarız. toplamın sonucu bizm girdiğimiz sayıya eşit ise x ile kullanıcıdan alınan sayı arkadaş sayıdır.*/

int arkadas_sayi(int sayi);/*burada kullanacağımız fonksyonun prototipini yazdık*/
int main(){/*yazım estetiği açısından ve programın doğru çalışması için öncelikle main fonksiyonumuzu yazdık*/
	int sayi,sonuc,toplam;
	printf("Arkadasını bulmak istediginiz sayıyı girin==> ");/*kullanıcıdan arkadaşının olup olmadığı kontrol edilecek sayiyi istedik*/ 
	scanf("%d",&sayi);/*bu sayıyı sayi integerine atadık*/
	sonuc=arkadas_sayi(sayi);/*fonksiyonumuzu burada tanımladık ve fonksiyonun return edeceği integer değerini sonuc integerine atadık*/
	if(sonuc==0)/*fonksyondan 0 değeri geri dönmüşse sayımızın arkadaş sayısını olmadığını ekrana yazdırdık*/ 		
		printf("%d sayısının arkadas sayısı bulunmamaktadır.\n",sayi);
	else{/*return edilen sayı 0 değil ise return edilen sayı girdiğimiz sayının arkdaş sayısıdır. bu sayıyı ekrana yazdırdık*/ 
		printf("%d’nin arkadas sayısı:",sayi);
		printf("%d\n",sonuc);
	}
	return 0;
}

int arkadas_sayi(int sayi){/*fonksiyonumuzu tanımlamaya başladık. fonksiyonu integer olarak tanımladık çünkü return edilecek değer bir integer*/
	int i,j,toplam=0,toplam1=0,carpan;
	
	if(sayi>0){/*sıfır ve sıfırdan küçük sayılarda arkadaş sayı durumu yoktur bu yüzden 0 ve negatif sayıları eliyoruz*/
		for(i=1;i<sayi;i++){/*bu döngümüzün amacı girilen sayımızın bölenlerini bulmak*/
			if(sayi%i==0)/*bu yüzden mod işlemini kullandık. sayımız i sayısına kalansız bölünüyor ise i sayısını toplam integerine atıyoruz ve gelen her tam bölen i'lerini toplam integerinde topluyoruz*/ 
				toplam=toplam+i;
		}
		if(toplam==sayi){/*muhteşem sayılardan ayırt etmek için*/
			return 0;
		}
		else{
			for(j=1;j<toplam;j++){/*bu sefer tam bölenlerimizin toplamı olan sayının çarpanlarını buluyoruz*/
				if(toplam%j==0)/*aynı işlemi burada da uyguluyoruz*/
					toplam1=toplam1+j;
			}
			if(toplam1==sayi)/*eğer çarpanlarımızın toplamı girdiğimiz sayıya eşit ise bu iki sayımız arkadaş sayıdır bu sayımızı main fonksiyonuna return ettiriyoruz*/
				return toplam;
			else/*eğer çarpanlarımızın toplamı girdiğimiz sayıya eşit değil ise girdiğimiz sayının arkadaş sayısı yoktur ve main fonksiyonuna geri dönüş yaptırırız*/
				return 0;	
			}
	}
	else{
		return 0;
	}	
}	
