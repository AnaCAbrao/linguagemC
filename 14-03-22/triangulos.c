#include <stdio.h>
#include<locale.h>
 
main(){
 setlocale(LC_ALL, "Portuguese");
 float ang1, ang2, ang3, conta;
 
  printf("Entre com um angulo do seu triangulo:");
  scanf ("%f", &ang1);
  printf("Entre com o segundo angulo do seu triangulo:");
  scanf ("%f", &ang2);
   printf("Entre com o terceiro angulo do seu triangulo:");
  scanf ("%f", &ang3);
  
 if ((ang1 == 90) || (ang2 == 90) || (ang3 == 90)) {
 	printf ("Seu triangulo � um Triangulo Retangulo \n");
 } 

 if ((ang1 > 90) || (ang2 > 90) || (ang3 > 90)) {
 	printf ("Seu triangulo � um Triangulo Obtuso \n");
 }

 if ((ang1 < 90) && (ang2 < 90) && (ang3 < 90)) {
 	printf ("Seu triangulo � um Triangulo Acut�ngulo \n");
 } 

system ("pause");

}
