#include <stdio.h>
#include <locale.h>

maximo(int valornum1, int valornum2){
	if (valornum1 > valornum2){
		printf("O maior valor é: %d \n", valornum1);
	} else {
		printf ("O maior valor é: %d \n", valornum2);
	}
}

main (){
 stelocale(LC_ALL, "Portuguese");
 float num1, num2;

 printf("Entre com o primeiro valor: ");
 scanf ("%f \n", &num1);
 printf("Entre com o segundo valor:");
 scanf ("%f \n", &num2);
 maximo(num1, num2);
 system ("pause");
 
}
