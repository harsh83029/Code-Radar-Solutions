// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        printf("Vowel");
    }else if((if (a >= '0' && a <= '9')  // ASCII values for '0' to '9' are 48 to 57
)){
        printf("Digit");

    }else if((a)){
        printf("Special Character");
    }
    else{
        printf("Consonant");
}
}