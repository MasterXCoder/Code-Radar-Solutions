#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf("%c", &a);
    if(isalpha(a)){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(isalnum(a)){
        printf("");
    }
    else{
        printf("");
    }
    return 0;
}