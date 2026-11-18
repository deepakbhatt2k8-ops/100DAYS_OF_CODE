//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopper(struct Student s[], int n) {
    struct Student top = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    struct Student s[5] = {
        {"Aman", 101, 78.5},
        {"Riya", 102, 92.0},
        {"Rahul", 103, 85.5},
        {"Neha", 104, 95.0},
        {"Karan", 105, 88.0}
    };

    struct Student topper = findTopper(s, 5);

    printf("Top Student Details:\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}