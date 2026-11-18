//Find and print the student with the highest marks
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int highest = 0;

    // Input details
    for (int i = 0; i < 5; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].roll_no);
        scanf("%f", &students[i].marks);
    }

    // Find student with highest marks
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > students[highest].marks) {
            highest = i;
        }
    }

    // Print student details
    printf("Name: %s\n", students[highest].name);
    printf("Roll Number: %d\n", students[highest].roll_no);
    printf("Marks: %.2f\n", students[highest].marks);

    return 0;
}