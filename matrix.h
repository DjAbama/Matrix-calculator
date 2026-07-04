#ifndef MATRIX_H
#define MATRIX_H


typedef struct{
    int rows;
    int colls; 
    float **data;
} Matrix;


void Create_Matrix(Matrix *matrix);
void Fill_Matrix(Matrix *matrix);
void Display_Matrix(Matrix *matrix);
void Delete_Matrix(Matrix *matrix);

#endif