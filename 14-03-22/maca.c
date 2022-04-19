 #include<stdio.h>
 #include<locale.h>
 
 main(){
 setlocale(LC_ALL, "Portuguese");
 float num, conta;

 printf("Olá! Escreva o número de maçãs que você comprou:");
 scanf("%f", &num);
 
 if (num < 12){
 	conta = num * 0.30;
 }
 
 if (num >= 12){
 	conta = num * 0.25;
 }
 
 printf("o valor final da sua compra é R$: %f \n", conta);
 
 system("pause");
 
}
