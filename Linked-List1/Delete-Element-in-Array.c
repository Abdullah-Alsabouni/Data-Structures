// Bir diziden eleman silme

#include <stdio.h>

void eleman_sil(int [], int, int);
int main(){
	int dizi[] = {10, 55, 33, 6, 50};
	int N = sizeof(dizi) / sizeof(int);
	int i;
	for(i = 0; i < N; i++){
		printf("%d %d\n", i, dizi[i]); // Dizinin ilk hali
	}
	eleman_sil(dizi, 0, N); // k = 0
	for(i = 0; i < N; i++){
		printf("%d %d\n", i, dizi[i]);// Dizinin son hali //{55,33,6,50,50} = Sonuç
	}
	return 0;
}

void eleman_sil(int dizi[], int k, int N){ // k=0,i=0 ==>{55,55,33,6,50},i=1 ==> {55,33,33,6,50}, i=2 ==> {55,33,6,6,50},i=3 ==>{55,33,6,50,50} = Sonuç
	int i;
	for(i = k; i < N - 1; i++){ 
		dizi[i] = dizi[i + 1];
	}
}
