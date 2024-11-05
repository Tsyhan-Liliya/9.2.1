#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <conio.h> 

// Константа Z
#define Z 2

// Знаходження максимального значення з двох чисел
#define MAX(y, z) ((y) > (z) ? (y) : (z))

// Знаходження мінімального значення з двох чисел
#define MIN(y, z) ((y) < (z) ? (y) : (z)) 

// Піднесення числа до квадрату
#define SQR(x) ((x) * (x))

// Вивід результату
#define PRINTR(w) puts("result :"); \
                  printf(#w "=%d\n", (int)w)

void main() {
    puts("Lab 9.2.1 Using macros and preprocessing directive"); 
    char ch = ' '; // Зберігання відповіді (y/n)
    int x = 0, y = 0, result = 0;

    do {
        puts("Enter x, y:"); 
        scanf("%d", &x); // Зчитуємо значення
        scanf("%d", &y); 

#if Z <= 3 // Якщо така умова то обчислюємо за першою формулою
        int max_part = MAX((x * y), (y * Z));
        int min_part = MIN((Z * x), (y * Z));
        // Зберігаємо
        result = max_part + min_part;
#else // Якщо z=>3 то обчислюємо за другою формулою
        int sqr_part = SQR(x - Z);
        result = MIN(sqr_part, x - y);
#endif

        PRINTR(result); // Вивід

        puts("Repeat? y / n"); 
        scanf(" %c", &ch); 
    } while (ch == 'y'); // Повтор якщо відповід yes
}
