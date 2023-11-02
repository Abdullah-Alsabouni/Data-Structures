// Tekli bağlı listede eleman ekleme
#include <stdio.h>
#include <stdlib.h>

struct dugum{
	int veri;
	struct dugum *adres;
};
typedef struct dugum bliste;
int main(){
	bliste *dugum1;  
	dugum1 = (bliste*)malloc(sizeof(bliste)); //  node1 
	dugum1 -> veri = 9; // düğüm1'in gösterdiği veri = 9
	dugum1 -> adres = NULL; // düğüm1'in gösterdiği node'un adresi null
	dugum1 -> adres = (bliste*)malloc(sizeof(bliste)); // node2 
	dugum1 -> adres -> veri = 20; 
	dugum1 -> adres -> adres = NULL;
	dugum1 -> adres -> adres = (bliste*)malloc(sizeof(bliste));// node3
	dugum1 -> adres -> adres -> veri = 55; 
	dugum1 -> adres -> adres -> adres = NULL;  
	bliste *temp = dugum1;
	while(temp != NULL){
		printf("%d ", temp -> veri); 
		temp = temp -> adres; // 
		// node1,node2 ve node3'ün verileri => 9 20 55
	}
	return 0;
}
