/*
Q150: Use pointer to struct to modify and display data using -> operator.

Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student *student;

    
    student = (struct Student *)malloc(sizeof(struct Student));
    if (student == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    printf("Enter details for Student (Name Roll Marks): ");
    scanf("%s %d %f", student->name, &student->roll, &student->marks);

    
    printf("Modified Data: Name: %s | Roll: %d | Marks: %.2f\n", student->name, student->roll, student->marks);

    
    free(student);

    return 0;
}
