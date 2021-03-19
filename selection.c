#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, cont, j, troca, pos, num[10];

	printf("insira a quantidade de elementos a serem ordenados:\n");
	scanf("%d", &cont);

	printf("Insira %d elementos:\n", cont);
	for(i=0; i< cont; i++)
		scanf("%d",&num[i]);

	for(i=0;i<cont-1;i++){
		pos = i;
		
	for(j = i + 1; j < cont; j++){
		if(num[pos] > num[j])
			pos = j;
		}
		if(pos != i){
			troca = num[i];
			num[i] = num[pos];
			num[pos] = troca;
		}
	}

	printf("Elementos Ordenados:\n");
	for(i=0;i<cont;i++)
		printf("%d ",num[i]);
	return 0;
}
