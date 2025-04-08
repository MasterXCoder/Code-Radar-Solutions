#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[30];
    char word[30];
    int count = 0;

    scanf("%s", a);

    strcpy(word, a);

    for (int i = 0; i < strlen(word); i++) {
        word[i] = tolower(word[i]);
    }

    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
