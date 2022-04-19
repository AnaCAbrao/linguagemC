#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int contador, inicio, final;
	printf("digite o valor inicial");
	scanf("%d", &inicio);
	printf("digite o valor final");
	scanf("%d", &final);
	
	while (inicio <= final){
		
		printf("%d \n", inicio);
		inicio = inicio + 1;
	}
	
}
