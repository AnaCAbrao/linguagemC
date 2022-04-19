#include<stdio.h>
#include<locale.h>
 
 main(){
 setlocale(LC_ALL, "Portuguese");
 float ang1, ang2, ang3;
  
  printf("Entre com um angulo do seu triangulo:");
  scanf ("%f", &ang1);
  printf("Entre com o segundo angulo do seu triangulo:");
  scanf ("%f", &ang2);
   printf("Entre com o terceiro angulo do seu triangulo:");
  scanf ("%f", &ang3);
  
 if ((ang1 == 90) || (ang2 == 90) || (ang3 == 90)){
 	printf("o seu triangulo é um Triangulo Retangulo \n");
 } 
  
 if ((ang1 > 90) || (ang2 > 90) || (ang3 > 90)){
 	printf("o seu triangulo é um Triangulo Obtuso \n");
 } 
 
 if ((ang1 < 90) && (ang2 < 90) && (ang3 < 90)){
    printf("o seu triangulo é um Triangulo Actangulo \n ");
 }
 
system ("pause");

}
