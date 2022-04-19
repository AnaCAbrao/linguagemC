#include<stdio.h>
#include<locale.h>
 
 main(){
 setlocale(LC_ALL, "Portuguese");
 float lado1, lado2, lado3, equilatero, isosceles, escalano;
  
  printf("Entre com um lado do seu triangulo:");
  scanf ("%d", &lado1);
  printf("Entre com o segundo lado do seu triangulo:");
  scanf ("%d", &lado2);
   printf("Entre com o terceiro lado do seu triangulo:");
  scanf ("%d", &lado3);
  
 if ((lado1 == lado2) && (lado1 == lado3)){
 	printf("o seu traingulo é Equilatero \n");
 } else {
 	if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3 )){
 	printf("o seu traingulo é Isósceles \n");
 }else{
 	 printf("o seu traingulo é Escalano \n ");
 }
 
