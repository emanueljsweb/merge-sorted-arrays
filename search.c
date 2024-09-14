#include "types.h"
#include <stdlib.h>
#include <string.h>

int binarySearch(Student students[], int left, int right, char* name) {
    if (right >= left) {
        int middle = left + (right - left) / 2;

        if (strcmp(students[middle].name, name) == 0) 
            return middle;

        if (strcmp(students[middle].name, name) > 0) 
            return binarySearch(students, left, middle - 1, name);

        return binarySearch(students, middle + 1, right, name);
    }

    return -1;
}

StudentList searchAllOcurrences(StudentList list, char* name) {
    int index = binarySearch(list.items, 0, list.size - 1, name);

    int left = index;

    while (left >= 0 && strcmp(list.items[left].name, name) == 0) {
        left--;
    }

    int right = index;
    while(right < list.size && strcmp(list.items[right].name, name) == 0) {
        right++;
    }

    StudentList result;
    result.size = right - left - 1;

    if (result.size > 0) {
        result.items = (Student*) malloc(result.size * sizeof(Student));

        for (int i = 0; i < result.size; i++) {
            result.items[i] = list.items[left + i + 1];
        }
    }

    return result;
}