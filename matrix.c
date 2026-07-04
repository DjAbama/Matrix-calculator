#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>


void Create_Matrix(Matrix *matrix){
    matrix->data = calloc(matrix->rows, sizeof(float *));

    if(matrix->data == NULL){
        printf("Error: Not enough memory!");
        exit(1);
    }

    for(int current_ROW = 0; current_ROW < matrix->rows; current_ROW++){
        matrix->data[current_ROW] = calloc(matrix->colls, sizeof(float));

        if(matrix->data[current_ROW] == NULL){
            printf("Error: Not enough memory!");
            exit(1);
        }
    }
}

void Fill_Matrix(Matrix *matrix){
    for(int current_ROW = 0; current_ROW < matrix->rows; current_ROW++){

        printf("Enter %d row elements: ", current_ROW+1);
        for(int current_COLL = 0; current_COLL < matrix->colls; current_COLL++){
            scanf("%f", &matrix->data[current_ROW][current_COLL]);

        }
    }
    printf("\n");
}

void Display_Matrix(Matrix *matrix){
    for(int current_ROW = 0; current_ROW < matrix->rows; current_ROW++){

        for(int current_COLL = 0; current_COLL < matrix->colls; current_COLL++){
            printf("%.2f ", matrix->data[current_ROW][current_COLL]);

        }
        printf("\n");
    }

}

void Delete_Matrix(Matrix *matrix){
    for(int current_ROW = 0; current_ROW < matrix->rows; current_ROW++){
        free(matrix->data[current_ROW]);
        free(matrix->data);
        matrix->rows =0;
        matrix->colls = 0;
        matrix->data = NULL;
    }
}