//
//  Sort.c
//  AlgorithmPlay
//
//  Created by 邓凯 on 2018/11/28.
//  Copyright © 2018年 邓凯. All rights reserved.
//

#include "Sort.h"
#include "Helper.h"

int Partition(int *a, int low, int high);
int Partition_1(int *a, int low, int high);

#pragma mark - 冒泡排序

void bubbleSort(int *a, int len) {
    bool isSorted = true;
    for (int i = 0; i < len - 1 && isSorted; i++) {
        isSorted = false;
        for (int j = 0; j < len - 1 - i; j++) {
            if (a[j] > a[j+1]) {
                swap(&a[j], &a[j+1]);
                isSorted = true;
            }
        }
    }
}


void bubbleSort_1(int *a, int len) {
    
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (a[j] > a[j+1]) {
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

#pragma mark - 快速排序

void quickSort(int *a, int low, int high) {
    
    if (low < high) {
        int pivotLoc = Partition(a, low, high);
        quickSort(a, low, pivotLoc - 1);
        quickSort(a, pivotLoc + 1, high);
    }
}

int Partition(int *a, int low, int high) {
    
    int pivotKey = a[low];
    while (low < high) {
        while (low < high && a[high] >= pivotKey) {
            --high;
        }
        a[low] = a[high];
        while (low < high && a[low] <= pivotKey) {
            ++low;
        }
        a[high] = a[low];
    }
    a[low] = pivotKey;
    return low;
}

int Partition_1(int *a, int low, int high) {
    
    int pivotKey = a[low];
    while (low < high) {
        while (low < high && a[high] >= pivotKey) {
            --high;
        }
        swap(&a[low], &a[high]);
        while (low < high && a[low] <= pivotKey) {
            ++low;
        }
        swap(&a[low], &a[high]);
    }
    return low;
}



