#include "types.h"
#include <stdlib.h>
#include <string.h>

StudentList mergeSortedLists(StudentList listA, StudentList listB) {
    int i = 0, j = 0, k = 0;

    StudentList mergedList;
    Student* students = (Student*) malloc((listA.size + listB.size) * sizeof(Student));
    
    while(i < listA.size && j < listB.size) {
        if(strcmp(listA.items[i].name, listB.items[j].name) < 0) {
            students[k] = listA.items[i];
            i++;
        } else {
            students[k] = listB.items[j];
            j++;
        }
        k++;
    }

    while(i < listA.size) {
        students[k] = listA.items[i];
        i++;
        k++;
    }

    while(j < listB.size) {
        students[k] = listB.items[j];
        j++;
        k++;
    }

    mergedList.items = students;
    mergedList.size = k;

    return mergedList;
}