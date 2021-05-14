//
//  das.cpp
//  AlgorithmPlay
//
//  Created by 邓凯 on 2019/12/25.
//  Copyright © 2019 邓凯. All rights reserved.
//

#include "das.hpp"
#include "Helper.h"

void bubbleSort1A(int A[], int n) {
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 1; i < n; i++) {
            if (A[i - 1] > A[i]) {
                swap_3(A[i - 1], A[i]);
                sorted = false;
            }
        }
        n--;
    }
}
