//
//  main.m
//  AlgorithmPlay
//
//  Created by 邓凯 on 2018/11/28.
//  Copyright © 2018年 邓凯. All rights reserved.
//

#include "Helper.h"
#include "Sort.h"

int main(int argc, const char * argv[]) {
    
    int a[9] = {3,5,8,1,2,5,4,7,6};
    display(a, 9);
    
//    bubbleSort(a, 9);
    
    quickSort(a, 0, 8);
    
    display(a, 9);
    
    return 0;
}
