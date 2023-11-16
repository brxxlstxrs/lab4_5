#include <math.h>
#include <stdio.h>

int foo(int a, int b, int c, int d) {
    return (fact(a) + fact(b) + fact(c) + fact(d));
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    res = foo(a, b, c, d);
    printf("%d", res);
}
