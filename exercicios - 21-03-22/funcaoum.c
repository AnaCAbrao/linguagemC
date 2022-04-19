#include <stdio.h>
#include <locale.h>

numero(){
	return 10;
}

main(){
	setlocale (LC_ALL, "Portuguese");
	
	printf("%d \n", numero());
	
	system("pause");
}
