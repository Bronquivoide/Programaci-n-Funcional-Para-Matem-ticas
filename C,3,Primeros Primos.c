#include <stdio.h>
int main(){
int z,n,i;
z=2;
printf("Dame la n correspondiente al numero de los primeros primos que quieres mostrar\n");
scanf("%d",&n);
while(n){
    for(i=2;i<z;i++){
    if(z%i==0){
        break;
    }
}
if(i==z){
    printf("%d,",z);
    n--;
}
    z++;
}


}
