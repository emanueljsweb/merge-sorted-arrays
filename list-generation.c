#include "types.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NAMES_SIZE 10
#define PHONES_SIZE 10

const char* names[NAMES_SIZE] = {
    "João",
    "Maria",
    "José",
    "Ana",
    "Pedro",
    "Paulo",
    "Lucas",
    "Luciana",
    "Mariana",
    "Carlos"
};

const char* phones[PHONES_SIZE] = {
    "1111-1111",
    "2222-2222",
    "3333-3333",
    "4444-4444",
    "5555-5555",
    "6666-6666",
    "7777-7777",
    "8888-8888",
    "9999-9999",
    "0000-0000"
};

int randomNumber(int min, int max) {
    return min + rand() % (max - min);
}

Student createRandomStudent() {
    Student student;

    student.name = strdup(names[randomNumber(0, NAMES_SIZE)]);
    student.phone = strdup(phones[randomNumber(0, PHONES_SIZE)]);
    student.age = randomNumber(18, 50);

    return student;
}

StudentList createRandomStudentList(int size) {
    StudentList list;
    Student* students = (Student*) malloc(size * sizeof(Student));

    for(int i = 0; i < size; i++) {
        students[i] = createRandomStudent();
    }

    list.items = students;
    list.size = size;

    return list;
}