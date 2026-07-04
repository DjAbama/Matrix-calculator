#ifndef VECTOR_H
#define VECTOR_H

typedef struct{
    int elements;
    float *data;
} Vector;

void Create_Vector(Vector *vec);
void Fill_Vector(Vector *vec);
void Display_Vector(Vector *vec);
void Delete_Vector(Vector *vec);

#endif