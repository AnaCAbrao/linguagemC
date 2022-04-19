#include<stdio.h>
#include<locale.h>

main(){
setlocale(LC_ALL, "Portuguese");	
int num1, num2;
	
 printf("Digite o primeiro valor:");
 scanf("%d", &num1);
	
 printf("Digite o segundo valor:");
 scanf("%d", &num2);
	
if  ( num1>num2){
	printf("O primeiro valor e o maior! \n");
}

	
if  ( num1<num2){
	printf("O segundo valor e o maior! \n");
}
system("pause");
}
