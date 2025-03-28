
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    } 
    int even_count;
    int odd_count1 ;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even_count++;
        }
        else{
            odd_count1++;
        }
    }
    printf("%d %d",even_count,odd_count1);
}