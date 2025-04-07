#include <stdio.h>
#include <string.h>

int main(){
    char word[30];
    scanf("%s",word);
    char val[30] = strrev(word);
    printf("%s",val);
}