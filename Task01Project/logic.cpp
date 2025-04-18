#include "logic.h"


int sum_elements_upper_main_diagonale(int matrix[SIZE][SIZE], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j > i)
			{
				sum += matrix[i][j];
			}
		}
	}
	

	return sum;
}