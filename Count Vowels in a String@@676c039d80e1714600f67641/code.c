#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[30];
    int count=0;
    scanf("%s", a);
    char word[30] = tolower(a);
    int len = strlen(word);
    for (int i=0; i < len; i++) {
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
