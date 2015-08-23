//
// Created by kosta on 8/23/2015.
//

#include "stdio.h"

int main() {
    float x = 1.23456f;
    printf("%-8.1f\n", x);
    printf("%10.6f\n", x);
    printf("%-8.3e\n", x);
    printf("%6.0e\n", x);



    return 0;
}