#include <stdio.h>

int main() {
    float q;
    for (int dt = 100; dt <= 200; dt += 10) {
        q = 0.2 * 4200 * dt;
        printf("%d\n", (int)q);
    }

    return 0;
}
