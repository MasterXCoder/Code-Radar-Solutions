#include <stdio.h>

struct data {
    char book[25];
    char author[25];
    float price;
};

int main() {
    int n;
    scanf("%d", &n);

    struct data s[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", &s[i].book, s[i].author, s[i].price);
    }
    float val;
    scanf("%f",&val);
    printf("Books above price %.2f:",val);
    for (int i = 0; i <n; i++) {
       if(s[i].price>val){
            printf("Title: %s, Author: %s, Price: %.2f", s[i].book, s[i].author, s[i].price);
       }
    }
    return 0;
}
