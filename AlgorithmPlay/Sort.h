//
//  Sort.h
//  AlgorithmPlay
//
//  Created by 邓凯 on 2018/11/28.
//  Copyright © 2018年 邓凯. All rights reserved.
//

#ifndef Sort_h
#define Sort_h

#include <stdio.h>
#include <stdbool.h>


/**
 冒泡排序

 @param a 要排序的数组
 @param len 数组长度
 */
void bubbleSort(int *a, int len);
void bubbleSort_1(int *a, int len);


/**
 快速排序

 @param a 要排序的数组
 @param low 数组起始位置
 @param high 数组终止位置
 */
void quickSort(int *a, int low, int high);

#endif /* Sort_h */
