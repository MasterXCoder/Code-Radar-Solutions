#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    if(isalpha(a)){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(isalnum(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}