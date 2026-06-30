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




int main(){
    int Current_Operation = Select_Operation();

    return 0;
}