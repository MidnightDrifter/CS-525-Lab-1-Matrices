#include "matrix.h"
#include <stdlib.h>
#include <stdio.h>

#define INT_SIZE sizeof(int)

void  matrix_print( Matrix m, int num_rows, int num_columns ) {
    int i, j;
    for ( i=0; i<num_rows; ++i ) {
        for ( j=0; j<num_columns; ++j ) {
            printf( "%4i ", m[i][j] );
        }
        printf( "\n" );
    }
}




Matrix matrix_create(int num_rows, int num_columns)
{

	Matrix m = (int**)(malloc(num_rows * sizeof(int*)));
	for (int i = 0; i < num_rows; i++)
	{
		m[i] = (int*)(malloc(INT_SIZE*num_columns));
	}

}

void matrix_add(Matrix m1, Matrix m2, Matrix result, int num_rows, int num_columns)
{
	for (int i = 0; i < num_rows; i++)
	{

		for (int j = 0; j < num_columns; j++)
		{
			result[i][j] = m1[i][j] + m2[i][j];
		}

	}
}

Matrix matrix_transpose(Matrix matrix, int num_rows, int num_columns)
{
	Matrix m = matrix_create(num_rows, num_columns);

	for (int i = 0; i < num_rows; i++)
	{

		for (int j = 0; j < num_columns; j++)
		{
			m[i][j] = matrix[j][i];
		}

	}
	return m;

}

void matrix_delete(Matrix matrix, int num_rows)
{
	for (int i = 0; i < num_rows; i++)
	{
		free(matrix[i]);
	}

	free(matrix);
}

void matrix_delete_row(Matrix matrix, int r, int num_rows)
{
	free(matrix[r]);

	for (int i = r; i < num_rows - 1; i++)
	{
		matrix[i] = matrix[i + 1];
	}
}

void matrix_delete_column(Matrix matrix, int c, int num_rows, int num_columns)
{
	for (int i = 0; i < num_rows; i++)
	{
		for (int j = c; j < num_columns - 1; j++)
		{
			matrix[i][j] = matrix[i][j + 1];
		}
	}
}



