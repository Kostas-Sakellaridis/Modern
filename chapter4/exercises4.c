//
// Created by kosta on 8/25/2015.
//

#include "stdio.h"

int main() {
    printf("Enter an integer: ");
    int n;
    scanf("%d", &n);

    int i = 0;
    int res[4];
    while (n != 0) {


        res[i] = n % 8;
        n /= 8;
        i++;
    }

    for (; i >= 0; i--)
        printf("%d", res[i]);

    return 0;
}