#include <stdio.h>
#include <locale.h>

main(){
  setlocale (LC_ALL, "Portuguese");
  int i;
  float notas[5] = {7, 8 , 10, 10.5, 9.5, 9.9}; //declara��o
  printf ("Exubir os valores do array \n \n");
  for (i=0; i<=4; i=i+1){
  	  printf("notas[%d] = %f \n", i, notas[i]);
  }
  
  
  system("pause");
}

