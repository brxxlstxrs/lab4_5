#include <stdio.h>

int max(int a, int b) {
    return ((a > b) ? a : b);
}

int main() {
    int x, y, z;
    printf("Поочередно введите x и y:\n");
    scanf("%d %d", &x, &y);
    z = max(x, y);
    printf("z=%d", z);

    return 0;
}
