#include <iostream>

#include "omp.h"

int main(int argc, char **argv)
{
    printf("Hello 1\n");

    #pragma omp parallel
    {
        printf("Hi\n");
    };

    printf("Hello 2\n");

    return 0;
}