// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(1<<(sizeof(a))* 32-1){
        printf("Set");
    }else{
        printf("Not Set");
    }
}