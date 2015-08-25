//
// Created by kosta on 8/25/2015.
//

#include "stdio.h"


int main() {
    int n,i=0;
    scanf("%d", &n);
    do {
        n /= 10;
        i++;

    } while (n > 0);

    printf("n has %d digits", i);








    return 0;

}