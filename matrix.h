#ifndef MATRIX_H
#define MATRIX_H


typedef struct{
    int rows;
    int colls; 
    float **data;
} Matrix;


float** Create_Matrix(int rows, int colls);
void Fill_Matrix(float **matrix_pointer, int rows, int colls);
void Display_Matrix(float **matrix_pointer, int rows, int colls);
void Delete_Matrix(float **matrix_pointer, int rows);

#endif