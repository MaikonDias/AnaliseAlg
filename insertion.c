#include <stdio.h>
#include <stdlib.h>

int main(){

	int i, j, cont, temp, num[10];

	printf("Insira a quantidade de numeros a serem adicionados: ");
	scanf("%d",&cont);

	printf("Insira  %d elementos:\n", cont);
	
	for(i=0;i<cont;i++)
		scanf("%d",&num[i]);

	for(i=1;i<cont;i++){
		temp=num[i];
		j=i-1;

		while((temp<num[j]) &&(j>=0)){
			num[j+1] = num[j];
			j = j-1;
		}

		num[j+1]=temp;
	}
	printf("\nValores Ordenados: ");
	for(i=0;i<cont;i++)
		printf("%d ",num[i]);

	return 0;
}
