#include <stdio.h>

void print(char);

int main() {
    char c1, c2;

    printf("\nВводите символы. Enter – окончание ввода\n");
    do {
        c1 = getchar();
	print(c1);
	if (c1 == '\n')
            break;
        c2 = getchar();
	print(c2);
    } while (c1 != '\n');

    return 0;
}

void print(char c) { putchar(c); }
