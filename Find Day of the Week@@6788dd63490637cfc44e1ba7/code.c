#include <stdio.h>

typedef enum {Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday} day;

void res(int a){
    switch(day){
        case Monday:
            printf("Monday");
            break;
        case Tuesday:
            printf("Tuesday");
            break;
        case Wednesday:
            printf("Wednesday");
            break;
        case Thursday:
            printf("Thursday");
            break;
        case Friday;
            printf("Friday");
            break;
        case Saturday;
            printf("Saturday");
            break;
        default:
            printf("Invalid");
            break;
    }
}
int main() {
    int a;
    sacnf("%d", &a);
    res(a);
    return 0;
}