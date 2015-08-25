//
// Created by kosta on 8/25/2015.
//

#include "stdio.h"


int main() {

    printf("Enter 4 integers: ");
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int res=0;
    if (a>b) {
        res = a;
        if (c>a)
            res = c;

    }
    printf("%d", res);
    return 0;
}