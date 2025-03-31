#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    int count=0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }else if(arr[i]%2!=0) {
            count1++;
            
        }
    }
    printf("%d %d",count,count1);
}