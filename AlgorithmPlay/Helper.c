//
//  Helper.c
//  AlgorithmPlay
//
//  Created by 邓凯 on 2018/11/28.
//  Copyright © 2018年 邓凯. All rights reserved.
//

#include "Helper.h"

void display(int *a, int len) {
    printf("print array:\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_1(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void swap_2(T *a, T *b) {
    *a = *b - *a;
    *b = *b - *a;
    *a = *b + *a;
}
