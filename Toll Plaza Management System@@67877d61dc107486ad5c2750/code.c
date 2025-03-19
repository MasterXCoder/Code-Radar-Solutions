#include <stdio.h>
#include <string.h> 

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
       (strcmp(s[i].name,"Car")==0)? c++:(strcmp(s[i].name,"Truck")==0)? t++:b++;
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n",c,t,b);
    return 0;
}
