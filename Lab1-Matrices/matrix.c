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




Matrix matrix_create(int num_rows, int num_columnss)
{

	

}

void matrix_add(Matrix m1, Matrix m2, Matrix result, int num_rows, int num_columns)
{

}

Matrix matrix_transpose(Matrix matrix, int num_rows, int num_columns)
{


}

void matrix_delete(Matrix matrix)
{


}

void matrix_delete_row(Matrix matrix, int r, int num_rows)
{

}

void matrix_delete_column(Matrix matrix, int c, int num_rows, int num_cols)
{

}



