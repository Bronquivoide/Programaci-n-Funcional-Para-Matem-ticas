#include<stdio.h>
int main (){
int An,n,Ab;
printf("La sucesion es; An=0.5*(n*n-n+2)\n");
printf("Dame el n-esimo termino hasta el que quieres ver en la sucesion\n");
scanf("%d",&n);
An=0.5*(n*n-n+2);
printf("El termino n=%d de la sucesion es: %d\n",n,An);
Ab=0.5*((n-1)*(n-1)-(n-1)+2);
printf("Los terminos anteriores al n-esimo estan dados por el conjunto {A1=1, ... , A%d-1=%d}\n",n,Ab);




}
