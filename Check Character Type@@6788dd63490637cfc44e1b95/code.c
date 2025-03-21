// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        printf("Vowel");
    }
    
    else if((a >= '0' && a <= '9')){

        printf("Digit");
    }
        
else if (!( (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9') )) {
    printf("Special Character");
}

    else{
        printf("Consonant");
}
}