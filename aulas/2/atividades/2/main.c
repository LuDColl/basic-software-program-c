#include <stdio.h>
#include <stdlib.h>

void main() {
	int vet[30], j;
	for (j = 0; j < 30; j++){
    	vet[j] = j * j;
    	printf("%d\n", vet[j]);
	}
}