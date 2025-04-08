#include <stdio.h>
#include <string.h>

int main(){
    char word[30];
    scanf("%s",word);
    int n = sizeof(word)/sizeof(word[0]);
    for(int i=n; i>0; i--){
        printf("%s",word[i]);
    }
}