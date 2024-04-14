#include <stdio.h>
int main(){
    int rev,rem,n,i;
    scanf("%d",&n);
    int temp;
    temp=n;
    for(i=1;n!=0;i++){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp){
        printf("Palindrome");
}
else{
    printf("Not a palindrome");
}
}