#include <stdio.h>
#include "matrix.h"
#include "vector.h"

int Select_Operation() {
    int Operation_Variable = 0; 

    printf("Avaliable Operations:\n 1.Add\n 2.Subtract\n 3.Multiply\n 4.Transpose\n 5.Find definer\nSelect Option: ");
    scanf("%d", &Operation_Variable);

    switch(Operation_Variable) {
        case 1:
            printf("Selected operation: Add\n");
            break;
        case 2:
            printf("Selected operation: Subtract\n");
            break;
        case 3:
            printf("Selected operation: Multiply\n");
            break;
        case 4:
            printf("Selected operation: Transpose\n");
            break;
        case 5:
            printf("Selected operation: Find definer\n");
            break;
        default:
            printf("Error: Invalid operation\n");
            break;
    }


    return Operation_Variable;   
}

int main(){

    Matrix matrix1;
    matrix1.rows = 2;
    matrix1.colls = 3;

    Create_Matrix(&matrix1);
    Fill_Matrix(&matrix1);
    Display_Matrix(&matrix1);
    Delete_Matrix(&matrix1);

    Vector vector1;
    vector1.elements = 5;

    Create_Vector(&vector1);
    Fill_Vector(&vector1);
    Display_Vector(&vector1);
    Delete_Vector(&vector1);


    return 0;
}