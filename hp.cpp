//
// Created by xiaohai on 8/9/21.
//

#include <iostream>

#include "omp.h"

int main(int argc, char **argv)
{
    int tid, mcpu;

    tid = omp_get_thread_num();
    mcpu = omp_get_num_threads();
    printf("Hello from thread %d in %d CPUs\n", tid, mcpu);
    printf("______before parallel\n");
    printf("\n");
    printf("______during parallel\n");

    #pragma omp parallel num_threads(3) private(tid, mcpu)
    {
        tid = omp_get_thread_num();
        mcpu = omp_get_num_threads();
        printf("Hello from thread %d in %d CPUS\n", tid, mcpu);
    }

    printf("\n");
    printf("_____after parallel\n");
    printf("Hello from thread %d in %d CPUS\n", tid, mcpu);

    return 0;
}