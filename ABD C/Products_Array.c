#include <stdio.h>
int main(){
    int arr [5]={1,2,3,4,5};
    int i;
    int size;
    int array_product=1;
    size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++){
array_product*=arr[i];
    }
   printf("%d",array_product); 
}