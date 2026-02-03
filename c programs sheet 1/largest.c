#include<stdio.h>
int main(){
    int a=25, b=42, c=17;
    int largest;
    if(a>b){
        if(a>c){
           printf("largest = %d", a);
        }else{
           printf("largest = %d", c);
        }
    }else{
        if(b>c){
            printf("largest = %d", b);
        }else{
            printf("largest = %d", c);
    }
}
    return 0;
}