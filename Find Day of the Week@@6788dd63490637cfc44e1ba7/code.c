#include <stdio.h>

typedef enum {Monday = 1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday} day;

void res(day a){
    switch(a){
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
        case Friday:
            printf("Friday");
            break;
        case Saturday;
            printf("Saturday");
            break;
        case Sunday:
            printf("Sunday");
        default:
            printf("Invalid");
            break;
    }
}
int main() {
    int a;
    scanf("%d", &a);
    day z = day(a);
    res(z);
    return 0;
}