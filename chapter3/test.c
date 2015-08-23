//
// Created by kosta on 8/22/2015.
//

#include "stdio.h"


int main() {

    int left[3];
    int right[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", left + i);
        scanf("%d", right + i);

    }

    for (int i = 0; i < 3; i++)
        printf("%d %d\n", *(left + i), *(right + i));

    return 0;
}
