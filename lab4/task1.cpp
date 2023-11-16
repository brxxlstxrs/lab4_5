#include <stdio.h>

int main() {
    int n, weight;
    float total_milk = 0.0;
    printf("Введите n (количество учеников в классе):\n");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
	printf("Введите вес ученика %d (в килограммах):\n", i + 1);
        scanf("%d", &weight);
        
        if (weight < 30)
            total_milk += 0.2;
    }

    printf("Общее количество литров молока, необходимое для класса:\n%.1f л\n", total_milk);

    return 0;
}
