#include "vector.h"
#include <stdio.h>
#include <stdlib.h>

void Create_Vector(Vector *vec){
    vec->data = calloc(vec->elements, sizeof(float));

    if(vec->data == NULL){
        printf("Error: Not enough memory");
        exit(1);
    }
}

void Fill_Vector(Vector *vec){
    printf("Enter Vector elements:");
    for(int current_element = 0; current_element < vec->elements; current_element++){
        scanf("%f", &vec->data[current_element]);
    }
    printf("\n");
}

void Display_Vector(Vector *vec){
    for(int current_element = 0; current_element < vec->elements; current_element++){
        printf("%.2f ", vec->data[current_element]);
    }
    printf("\n");
}

void Delete_Vector(Vector *vec){
    free(vec->data);
    vec->data = NULL;
    vec->elements = 0;
}