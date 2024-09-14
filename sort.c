#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void change_position(Student arr[], int i, int j) {
    Student aux = arr[i];
    arr[i] = arr[j];
    arr[j] = aux;
}

int partition(Student arr[], int low, int high) {
    Student pivot = arr[high];
    
    int i = low - 1;
    
    for (int j = low; j < high; j++) {
        if (strcmp(arr[j].name, pivot.name) < 0) {
            i += 1;
            change_position(arr, j, i);
        }
    }
    
    change_position(arr, i + 1, high);
    
    return i + 1;
}

void quick_sort(Student arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        
        quick_sort(arr, low, pivotIndex - 1);
        quick_sort(arr, pivotIndex + 1, high);
    }
}