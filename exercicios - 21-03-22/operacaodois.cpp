#include <stdio.h>
#include <locale.h>

int numero(){
	return 10;
}

ola(){
   printf("Olá linda sala \n");
}

main(){
	setlocale (LC_ALL, "Portuguese");
	
	printf("%d \n", numero());
	ola();
	system("pause");
}
