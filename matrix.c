#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>


float** Create_Matrix(int rows, int colls){
    float **matrix_pointer = calloc(rows, sizeof(float *));

    if(matrix_pointer == NULL){
        printf("Error: Not enough memory");
        return NULL;
    }

    for(int current_ROW = 0; current_ROW < rows; current_ROW++){
        matrix_pointer[current_ROW] = calloc(colls, sizeof(float));

        if(matrix_pointer[current_ROW] == NULL){
            printf("Error: Not enough memory");
            return NULL;
        }
    }

    return matrix_pointer;
}

void Fill_Matrix(float **matrix_pointer, int rows, int colls){
        for(int current_ROW = 0; current_ROW < rows; current_ROW++){

        printf("Enter %d row numbers:", current_ROW);
        for(int current_COLL = 0; current_COLL < colls; current_COLL++){
            scanf("%f", &matrix_pointer[current_ROW][current_COLL]);
        }
        printf("\n");
    }

}

void Display_Matrix(float **matrix_pointer, int rows, int colls){
    for(int current_ROW = 0; current_ROW < rows; current_ROW++){
        for(int current_COLL = 0; current_COLL < colls; current_COLL++){
            printf("%.2f ", matrix_pointer[current_ROW][current_COLL]);
        }
    printf("\n");
    }


}

void Delete_Matrix(float **matrix_pointer, int rows){
    for(int current_ROW = 0; current_ROW < rows; current_ROW++){
        free(matrix_pointer[current_ROW]);
    }

    free(matrix_pointer);
}