// Dizide araya eleman ekleme
#include <stdio.h>

void eleman_ekle(int [], int, int, int);
int main(){
	int dizi[] = {1, 2, 3, 4, 5};
	int N = sizeof(dizi) / sizeof(int); // N = 5
	int i;
	for(i = 0; i < N; i++){
		printf("%d %d\n", i, dizi[i]); //{1, 2, 3, 4, 5}
	}
	eleman_ekle(dizi, 2, 100, N); //k = 2, eleman = 100
	for(i = 0; i < N; i++){
		printf("%d %d\n", i, dizi[i]);//  {1, 2, 100, 3, 4}
	}
	return 0;
}
void eleman_ekle(int dizi[], int k, int eleman, int N){
	int i;
	for(i = N - 2; i >= k; i--){ // k=2,i=3 ==>{1,2,3,4,4}, i=2 ==>{1,2,3,3,4}
		dizi[i + 1] = dizi[i];
	}
	dizi[k] = eleman; // dizi[2] = 100  ==> dizi[] = {1, 2, 100, 3, 4}
}
