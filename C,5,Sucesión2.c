#include<stdio.h>
#include<stdlib.h>
int main(){
int n,s,i;
printf("Dame un n para el que quieras mostrar todos los elementos menores\n");
scanf("%d",&n);
s=1; i=0;
while(s<n){
        printf("%d,",s);
i=i+1;
s=s+i;

}


}
