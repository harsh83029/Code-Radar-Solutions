#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(0<n)
   {
    printf("Positive");
   } else if(0>n){
    printf("Negative");
   }else{
    printf("Zero")
   }
}