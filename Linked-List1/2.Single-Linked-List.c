#include <stdio.h>
#include <stdlib.h>

struct dugum{
	int veri;
	struct dugum *adres;
};
typedef struct dugum bliste;

bliste *dugumolustur(int);
void dugumyazdir();
bliste *dugum1 = NULL;
void sonaekle(int);
void basaekle(int);
void arayaekle(bliste*, int);
int main(){
	dugum1 = dugumolustur(10);
	bliste *dugum2 = dugumolustur(20);
	bliste *dugum3 = dugumolustur(30);
	dugum1 -> adres = dugum2;
	dugum2 -> adres = dugum3;
	dugumyazdir();
	sonaekle(40);
	sonaekle(50);
	dugumyazdir();
	basaekle(100);
	dugumyazdir();
	arayaekle(dugum2, 200);
	dugumyazdir();
	return 0;
}
//////////////////// 1.Fonksiyon
bliste *dugumolustur(int veri){
	bliste *yenidugum = (bliste*)malloc(sizeof(bliste));
	yenidugum -> veri = veri;
	yenidugum -> adres = NULL;
	return yenidugum;
}
/////////////////////////// 2.Fonksiyon
void dugumyazdir(){
	bliste *temp = dugum1;
	while(temp != NULL){ // temp -> adres = NULL sonaeklem fonk. için, bu fonk.'da son elemanı yazdırmaz
		printf("%d ", temp -> veri);
		temp = temp -> adres;
	}
	printf("\n");
}
//////////////////// 3.Fonksiyon
void sonaekle(int veri){
	bliste *eklenecek = dugumolustur(veri);
	if(dugum1 == NULL){
		dugum1 = eklenecek;
	}
	else{
		bliste *temp = dugum1;
		while(temp -> adres != NULL){
			temp = temp -> adres;
		}
		temp -> adres = eklenecek;
	}
}
//////////////////// 4.Fonksiyon
void basaekle(int veri){
	bliste *eklenecek = dugumolustur(veri);
	if(dugum1 == NULL){
		dugum1 = eklenecek;
	}
	else{
		bliste *temp = dugum1; // temp veri'siz bir düğüm
		dugum1 = eklenecek; // 10 => 100
		dugum1 -> adres = temp;   
	}
}
/////////////////////////// 5.fonksiyon
void arayaekle(bliste* yer, int veri){
	bliste *eklenecek = dugumolustur(veri);
	eklenecek -> adres = yer -> adres;
	yer -> adres = eklenecek;
}
