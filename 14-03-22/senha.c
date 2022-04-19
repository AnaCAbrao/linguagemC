#include<stdio.h>
#include<locale.h>

main(){
setlocale(LC_ALL, "Portuguese");	
int senha;
	
 printf("Digite a senha de quatro digitos:");
 scanf("%d", &senha);

if (senha == 1234){
	printf("ACESSO PERMITIDO \n");
}

if (senha != 1234){
	printf("ACESSO NEGAD0 \n");
}

system("pause");
	 
}
