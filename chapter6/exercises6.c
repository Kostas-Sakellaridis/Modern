//
// Created by kosta on 8/25/2015.
//

#include "stdio.h"

int main() {
    int n;

    scanf("%d", &n);
    int i=1;
    while (i * i <= n) {
        if (i*i %2 ==0)
        printf("%d ", i * i);
        i++;
    }

    return 0;
}