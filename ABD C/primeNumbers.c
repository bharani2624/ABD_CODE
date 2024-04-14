#include <stdio.h>
int primeFind(int n){
    int x,i;
    x=n/2;
    if(n<2)
    return 0;
    for(i=2;i<=x;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){
int prime,i,a,b;
int sum_prime=0;

scanf("%d %d",&a,&b);

for(i=a;i<=b;i++){
    prime=primeFind(i);    
if(prime==0){
    printf("");
}
else{
    sum_prime+=i;
}
}
printf("%d",sum_prime);
}