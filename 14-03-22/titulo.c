#include<stdio.h>
 #include<locale.h>
 
 main(){
 setlocale(LC_ALL, "Portuguese");
 int ano, anos;

 printf("Olá! Escreva o ano em que você nasceu:");
 scanf("%d", &ano);
 
  anos = 2022 - ano;
  
 if (ano >= 16){
  printf ("Você sabia que já tem a idade necessária para votar? Agora que está sabendo faça seu título de eleitor e ajude a nossa democracia! \n");
 }
 
 if (ano < 16){
  printf("Infelizmente você ainda não tem a idade necessária para poder votal, espere mais um pouco para ajudar a nosa democracia! \n");
 }
 
system("pause");

}
