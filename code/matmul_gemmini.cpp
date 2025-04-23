#include <iostream>
#include <stdlib.h>
extern "C" {
#include "gemmini.h"
}

#define DIM 64

int main() {
    gemmini_flush(0);

    // Define matrices in scratchpad memory
    int64_t A[DIM][DIM] = {0};
    int64_t B[DIM][DIM] = {0};
    int64_t C[DIM][DIM] = {0};

    // Initialize A and B
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            A[i][j] = 1;
            B[i][j] = 2;
        }
    }

    // Load to scratchpad memory and compute
    gemmini_extended_mvin((elem_t*)A, 0, DIM, DIM, DIM);
    gemmini_extended_mvin((elem_t*)B, 1, DIM, DIM, DIM);
    gemmini_extended_mvin((elem_t*)C, 2, DIM, DIM, DIM);
    gemmini_config_st(2, DIM);
    gemmini_config_ld(DIM);
    gemmini_config_ex(0, 0, 0, 0, 0);
    gemmini_matmul_preload(0, 2);
    gemmini_matmul_compute(0, 1);
    gemmini_ext_fence();

    // Move result back to C
    gemmini_extended_mvout((elem_t*)C, 2, DIM, DIM, DIM);

    std::cout << "Matrix multiplication (Gemmini) completed.\n";
    return 0;
}
