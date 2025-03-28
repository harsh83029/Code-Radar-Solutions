// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    } int even_count = count;
    int odd_count = count1;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            count++;
        }else if(arr[i]%2!==0){
            count1++;
        }
    }
    printf("%d %d",even_count,odd_count);
}