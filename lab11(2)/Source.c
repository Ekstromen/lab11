#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 100
#define M_PI 3.14159265359

float func(float x);

int main()
{	float A[N];
	int i = 0;
	float t = 0.1, sp = 0, sn = 0, cp = 0, cn = 0;
	setlocale(LC_ALL, "rus");
	for (; t < 2.5 && i < N; t += 0.01,i++)
	{
		A[i] = func(t);

		if (A[i] > 0) 
		{
			sp += A[i];
			cp++;
		}
		else
		{
			sn += A[i];
			cn++;
		}

	}

	printf("Имя массива = 'A' , накопленное положительное значение = %f , накопленное отрицательное значение = %f , число положительных значений = %.0f , число отрицательных значений = %.0f , среднее значение всех положительных элементов массива = %.2f ", sp, sn, cp, cn, sp/cp  );                                           
}

float func(float x)
{
	float y;
	y = (x * x) + (2. * M_PI) * (cos(M_PI * x));
	return y;
}

