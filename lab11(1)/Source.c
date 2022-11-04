#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 10


void main()
{
    float temp,s = 0;
    float A[N];
    float Z[N];
    setlocale(LC_ALL, "rus");
    for (int i = 0; i < N; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
        Z[i] = ceil(temp);
        s += A[i];
    }

    printf("\n _____________________________________________\n");
    printf("\n| индекс | исходное значение | новое значение |\n");

    for (int i = 0; i < N; i++)
    {
        printf("| %d \t | %.2f \t     | %.2f \t      |\n", i,A[i],Z[i]);
    }

    printf("\nСреднее арифметическое значение массива: %.2f", s/N);
}

