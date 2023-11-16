#include <math.h>
#include <stdio.h>

#define EPS 0.0001

int main() {
    float x;
    printf("Введите значение x:\n");
    scanf("%f", &x);

    float sum = x;
    int n = 1;
    float term = x * x * x / 6;
    
    while (fabs(term) > EPS) {
        sum += term;
        n++;
        term *= (n - 0.5) * (n - 0.5) * x * x / n / (n + 0.5);
    }
    
    /* float sum = 0;
     * int n = 0;
     * float term = x;
     * 
     * do {
     *     sum += term;
     *     n++;
     *     term *= (n - 0.5) * (n - 0.5) * x * x / n / (n + 0.5);
     * } while (fabs(term) > EPS);
     */
    
    float y = asinf(x);
    printf("Сумма данного ряда при x = %f, c точностью %f,\nS = %f\n", x, EPS, sum);
    printf("Значение контрольной функции,\ny = %f\n", y);
    printf("Разница,\nΔ = %f\n", fabs(y - sum));

    return 0;
}
