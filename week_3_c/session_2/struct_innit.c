#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char student_id[11];
    unsigned mark;
}Student;

int main (){
    Student new_student;
    char id[10];
    scanf("%s", id );
    
    


    new_student.mark = 35;
    strcpy (new_student.name, "clive dingle");
    strcpy (new_student.student_id, id );


    printf ("student name: %s\n", new_student.name);
    printf ("student id: %s\n", new_student.student_id);
    printf ("student mark: %u\n", new_student.mark);
    return 0;
}