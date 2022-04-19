#include <stdio.h>
#include <locale.h>

main(void){
	int contador, num, multi;
  printf("Escreva um valor para descobrir a tabuada");
  scanf("%d", &num);
  contador = 1;
  while (contador <11){
  	multi= contador * num;
  	printf("%d. %d = %d \n", contador, num, multi);
  	contador=contador +1;
  }
  
  system ("pause");
  
}
