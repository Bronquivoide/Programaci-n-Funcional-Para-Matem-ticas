#include <stdio.h>
#include <math.h>
int main(){
int n;
float theta,x,y,d,r;
printf("Dame la n correspondiente al número de lados del polígono\n");
scanf("%d",&n);
printf("Dame la longitud d de los lados del poligono\n");
scanf("%f",&d);
printf("Las coordenadas son: \n");
theta=(6.2832)/n;
r=(1/sin(theta/2))*(d/2);
x=r*cos(theta);
y=r*sin(theta);
printf("x=%f\n",x);
printf("y=%f\n",y);

}
