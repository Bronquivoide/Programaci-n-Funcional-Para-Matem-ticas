#include<stdio.h>
int main(){
int n,s,i,valores,prom;
s=0;
printf("Dame el numero n de valores del que quieres calcular el promedio\n");
scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Dame un valor que deseas promediar\n");
     scanf("%d",&valores);
     s=s+valores;
   }
prom=s/n;
printf("El promedio es %d\n",prom);


}
