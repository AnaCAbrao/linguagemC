#include <stdio.h>
#include <locale.h>

quadrado (int valora, int valorb){
	if (valora == valorb){
		printf("� um quadrado \n");
	} else {
		printf ("� um retangulo \n ");
    }
}

main (){
 setlocale(LC_ALL, "Portuguese");
 float a, b; 

 printf("Entre com o primeiro valor:");
 scanf ("%d", &a);
 printf("Entre com o segundo valor:");
 scanf ("%d", &b);
 quadrado(a, b);
 system ("pause");
 
}
