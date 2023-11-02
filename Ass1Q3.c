#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[50];
    int marks;
};

int compareByMarks(const void *a, const void *b) 
{
    const struct Student *studentA = (const struct Student *)a;
    const struct Student *studentB = (const struct Student *)b;
    return studentB->marks - studentA->marks;
}

int main() {
    struct Student students[10] = {
        {1, "A", 80},
        {2, "B", 78},
        {3, "C", 90},
        {4, "D", 66},
        {5, "E", 78},
        {6, "F", 88},
        {7, "G", 92},
        {8, "H", 70},
        {9, "I", 87},
        {10,"J", 73}
    };

    qsort(students, 10, sizeof(struct Student), compareByMarks);

    for (int i = 0; i < 10; i++) {
        printf("Roll No: %d, Name: %s, Marks: %d\n", students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}
