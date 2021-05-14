//
//  Helper.h
//  AlgorithmPlay
//
//  Created by 邓凯 on 2018/11/28.
//  Copyright © 2018年 邓凯. All rights reserved.
//

#ifndef Helper_h
#define Helper_h

typedef unsigned long long T;

#include <stdio.h>


/**
 打印数组

 @param a 数组
 @param len 数组长度
 */
void display(int *a, int len);

/**
 交换两个数

 @param a 其中一个数
 @param b 另一个数
 */
void swap(int *a, int *b);
void swap_1(int *a, int *b);
void swap_2(T *a, T *b);
void swap_3(int a, int b);


#endif /* Helper_h */
