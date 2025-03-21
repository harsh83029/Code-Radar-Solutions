// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    sacnf("%d%d%d",&a,&b,&c);
    if(a==b==c){
        printf("Equilateral");
    }else if(a==b!=c){
        printf("Isosceles");
    }
}