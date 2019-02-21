#include <stdio.h>

int main(){
    int t;
    long long a, b;
    int i;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%lld%lld", &a, &b);
        printf("%lld\n", a+b);
    }
}