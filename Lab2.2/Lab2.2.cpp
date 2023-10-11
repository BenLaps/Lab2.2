#include <stdio.h>
#include <omp.h>
#include<windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int threamNum;
	printf("Кількість потоків \n");
	scanf_s("%d", &threamNum);
	omp_set_num_threads(threamNum);

#pragma omp parallel
	{

		if (omp_get_thread_num() % 2 == 0)
		{
			printf("Hello OpenMP \n");
		}
		else if (omp_get_thread_num() % 2 == 1)
		{
			printf("Роман Процак \n");
		}
	}
	return 0;
}
