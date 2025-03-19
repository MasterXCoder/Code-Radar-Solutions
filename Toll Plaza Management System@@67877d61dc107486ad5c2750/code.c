#include <stdio.h>

struct data {
    char number[25];
    char name[25];
    float amt;
};
int main() {
    int n;
    scanf("%d", &n);

    struct data s[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", &s[i].number, s[i].name, &s[i].amt);
    }
    int c=0,t=0,b=0;
    for (int i = 0; i < n; i++) {
       s[i].name=="Car"? c++:s[i].name=="Truck"? t++:b++;
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n",c,t,b);
    return 0;
}
