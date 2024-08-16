#include<stdio.h>
#include<math.h>
int main(){
int s,i,n;
printf("Dame n\n");
scanf("%d",&n);
s=0;
for(i=1;i<=n;i++){
s=s+(pow(2,-n));
}

printf("El valor de esta serie es %d\n",s);
printf("Como la serie tiende a 1 conforme n tiende a infinito, la serie converge a 1\n");
}
