#ifndef TYPES_H
#define TYPES_H

typedef struct Student {
    char* name;
    char* phone;
    int age;
} Student;

typedef struct StudentList {
    Student* items;
    int size;
} StudentList;

#endif