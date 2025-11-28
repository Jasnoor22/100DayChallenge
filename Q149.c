/*
Q149: Use malloc() to allocate structure memory dynamically and print details.


Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

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

    
    printf("Name: %s | Roll: %d | Marks: %.2f\n", student->name, student->roll, student->marks);

    
    free(student);

    return 0;
}
