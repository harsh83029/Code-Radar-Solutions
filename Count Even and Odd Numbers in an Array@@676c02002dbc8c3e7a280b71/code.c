#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    int even=0;
    int odd=0;
    int zero=0;
    for(int i=0;i<n;i++){
        if(arr[n]%2==0){
            even=arr[n];
        }else  if(arr[n]%2!=0){
            odd=arr[n];
        }else{
            zero=arr[n];
        }
    }
    printf("%d %d",even,odd,zero);
}