//In a class of 2 students, having 5 subjects each, find out the roll number of students who has the highest percentage (use conditional operator not array)
#include <stdio.h>
int main()
{
    float marks_stu1, average_stu1 = 0;
    float marks_stu2, average_stu2 = 0;

    printf("-----------------------------------\n");
    printf("Marks of student 1: \nSubject 1: ");
    scanf("%f",&marks_stu1);
    average_stu1 += marks_stu1;

    printf("Subject 2: ");
    scanf("%f",&marks_stu1);
    average_stu1 += marks_stu1;

    printf("Subject 3: ");
    scanf("%f",&marks_stu1);
    average_stu1 += marks_stu1;

    printf("Subject 4: ");
    scanf("%f",&marks_stu1);
    average_stu1 += marks_stu1;

    printf("Subject 5: ");
    scanf("%f",&marks_stu1);
    average_stu1 += marks_stu1;

    printf("-----------------------------------\n");
    printf("Marks of student 2: \nSubject 2: ");
    scanf("%f",&marks_stu2);
    average_stu2 += marks_stu2;

    printf("Subject 2: ");
    scanf("%f",&marks_stu2);
    average_stu2 += marks_stu2;

    printf("Subject 3: ");
    scanf("%f",&marks_stu2);
    average_stu2 += marks_stu2;

    printf("Subject 4: ");
    scanf("%f",&marks_stu2);
    average_stu2 += marks_stu2;

    printf("Subject 5: ");
    scanf("%f",&marks_stu2);
    average_stu2 += marks_stu2;

    average_stu1 = average_stu1/5;
    average_stu2 = average_stu2/5;

    printf("-----------------------------------\n");
    (average_stu1 == average_stu2) ? printf("Equal Marks") :
        (average_stu1 > average_stu2) ? printf("Student 1 has higher marks") :
        printf("Student 2 has higher marks");
    printf("\n-----------------------------------\n");

    return 0;
}
