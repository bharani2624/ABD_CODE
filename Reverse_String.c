#include <stdio.h>
int main(){
    char str[]="HelloWorld";
    int size,i;
    size=sizeof(str)/sizeof(str[0]);
    for(i=0;i<size;i++){
        printf("%s",str[]);
    }
}