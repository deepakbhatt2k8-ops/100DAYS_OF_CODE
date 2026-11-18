//Store details of 5 students in an array of structures and print all
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];

    // Input details of 5 students
    for (int i = 0; i < 5; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].roll_no);
        scanf("%f", &students[i].marks);
    }

    // Print details of all students
    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}