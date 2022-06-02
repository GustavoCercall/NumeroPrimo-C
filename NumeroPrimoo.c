#include<stdio.h>
#include <stdlib.h>


int funcPrimo(int a, int i)
{
  if(a < 2) return 0;
  if (a == 2) {
    return 1;
  }
  if (a % i == 0) return 0;
  if (i * i > a)
    return 1;
  return funcPrimo(a,i+1);
}

void main(){
  int n;


  int resp;
  do{
  printf("\nDigite um numero inteiro :\n");
  scanf("%i",&n);
  if(funcPrimo(n,2)) {
    printf("O numero %d eh primo", n);   
  }else {
    printf("nao eh um numero primo\n");
  }
printf("\n----------------------------\n");
printf("\nDigite 1 para continuar ou 0 para sair\n");
scanf("%d", &resp);
  }while(resp != 0);
}