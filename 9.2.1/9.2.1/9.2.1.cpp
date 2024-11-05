#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <conio.h> 

// ��������� Z
#define Z 2

// ����������� ������������� �������� � ���� �����
#define MAX(y, z) ((y) > (z) ? (y) : (z))

// ����������� ���������� �������� � ���� �����
#define MIN(y, z) ((y) < (z) ? (y) : (z)) 

// ϳ�������� ����� �� ��������
#define SQR(x) ((x) * (x))

// ���� ����������
#define PRINTR(w) puts("result :"); \
                  printf(#w "=%d\n", (int)w)

void main() {
    puts("Lab 9.2.1 Using macros and preprocessing directive"); 
    char ch = ' '; // ��������� ������ (y/n)
    int x = 0, y = 0, result = 0;

    do {
        puts("Enter x, y:"); 
        scanf("%d", &x); // ������� ��������
        scanf("%d", &y); 

#if Z <= 3 // ���� ���� ����� �� ���������� �� ������ ��������
        int max_part = MAX((x * y), (y * Z));
        int min_part = MIN((Z * x), (y * Z));
        // ��������
        result = max_part + min_part;
#else // ���� z=>3 �� ���������� �� ������ ��������
        int sqr_part = SQR(x - Z);
        result = MIN(sqr_part, x - y);
#endif

        PRINTR(result); // ����

        puts("Repeat? y / n"); 
        scanf(" %c", &ch); 
    } while (ch == 'y'); // ������ ���� ������ yes
}
