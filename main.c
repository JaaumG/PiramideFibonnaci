#include <stdio.h>
#include <stdlib.h>


void main() {
	
	int num, numA = 2, numB = 1, linhas, i = 0, n=0;
	int ini, ini2;
	printf("Entre com o primeiro valor da piramide \n");
	scanf("%d", &ini);
	printf("Entre com a quantidade de linhas \n");
	scanf("%d", &linhas);
	linhas--;
	printf("\n\n%d\n", ini);
	while (i<linhas){
		n=0;
		num = numA+numB;
		numB = numA;
		numA = num;
		ini += numA;
		printf("%d ", ini);
		if (i == 0 ){
			ini2 = ini;
			ini2 +=2;
			printf ("%d", ini2);	
		}
		for (ini2=ini;n<=i && i!=0; n++){
			ini2 +=2;
			printf ("%d ", ini2);
		}
		printf("\n");
		i++;
		}
	}
