/*
Author: Tuğba GÜLER
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <pthread.h>

double pi_result = 0.0;
int thread_count, total_number;

double calculate_operation(int64_t nStart, int64_t nEnd)
{
	double double_number = 0.0;
	int i;
	int nSign;
	for (i = nStart; i < nEnd; ++i)
	{
		nSign = (i % 2) * (-2) + 1;
		double_number = double_number + (double)(nSign * 1.0 / (2 * i + 1));
	}
	return double_number;
}

void *pi_function(void * data)
{
	int64_t idx = (int64_t)data;
	int64_t nStart, nEnd;
	nStart = (total_number * idx) / thread_count;
	nEnd = (total_number * (idx + 1)) / thread_count;
	pi_result = pi_result + 4.0 * calculate_operation(nStart, nEnd);
}

int main()
{
	int64_t i;
	pthread_t pthread[100];
	int thread_id;
	int status;
	
	time_t time_clock;
	//input parameter//
	printf("Please Input Total Number. total number = ");
	scanf("%d", &total_number);
	printf("Please Input Thread Count. thread count = ");
	scanf("%d", &thread_count);
	
	printf("\nProgram is ruunig.Please wait for a few minutes...\n\n");
	
	time_clock = clock();
	for (i = 0; i < thread_count; ++i)
	{
		thread_id = pthread_create(&pthread[i], NULL, pi_function, (void*)i); 
		if (thread_id < 0)
		{
			perror("pthread0 create error");
			exit(EXIT_FAILURE);
		}
	}
	
	for (i = 0; i < thread_count - 1; ++i)
	{
		pthread_join(pthread[i], (void **)&status);
	}
	
	//display result//
	time_clock = clock() - time_clock;
	double real_pi = 4 * atan(1);
	printf("\nREAL PI NUMBER       = 3,1415926535897932384626433832795028841971");
	printf("\nCALCULATED PI NUMBER = %.40f \nDifference = %.40f", pi_result, real_pi - pi_result);
	printf("\nElapsed Time : %fs",(double)time_clock / 1000000.0);
	return 0;
}
