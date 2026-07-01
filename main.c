#include <stdio.h>
#include <stdlib.h>

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

    for(int current_ROW = 0; current_ROW < rows; current_ROW++){

        printf("Enter %d row numbers:", current_ROW);
        for(int current_COLL = 0; current_COLL < colls; current_COLL++){
            scanf("%f", &matrix_pointer[current_ROW][current_COLL]);
        }
        printf("\n");
    }

    return matrix_pointer;
}

void Delete_Matrix(float **matrix_ptr, int rows){
    for(int current_ROW = 0; current_ROW < rows; current_ROW++){
        free(matrix_ptr[current_ROW]);
    }

    free(matrix_ptr);
}

int main(){
    int Current_Operation = Select_Operation();

    float **matrix1 = Create_Matrix(2, 3);

    Delete_Matrix(matrix1, 2);

    return 0;
}