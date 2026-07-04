#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include "vector.h"

typedef enum {
    Add = 1,
    Subtract = 2,
    Multiply = 3,
    Transpose = 4,
    Find_Definer = 5
} Operations;

void Select_Operation(Operations *operation) {
    int selected_op;

    printf("Select Operation: \n");
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Transpose\n");
    printf("5.Find Definer");

    scanf("%d", &selected_op);
    if(selected_op > 0 && selected_op <= 5){
        *operation = (Operations)selected_op;
    }
    else{
        printf("Error: Invalid Operation");
        exit(1);
    }
}

int main(){

    Operations Selected_Operaion;
    Select_Operation(&Selected_Operaion);


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