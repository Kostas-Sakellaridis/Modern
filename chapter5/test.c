//
// Created by kosta on 8/25/2015.
//

#include "stdio.h"

int main() {

    printf("Enter date (mm,dd,yy):");
    int m, d, y;
    scanf("%d%d%d", &m, &d, &y);
    printf("Dated this %d", d);
    switch (d) {
        case 1:
        case 21:
        case 31:
            printf("st");
            break;
        case 2:
        case 22:
            printf("nd");
            break;
        case 3:
        case 23:
            printf("rd");
            break;

        default:
            printf("th");
    }

    printf(" day of ");
    switch (m) {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
    }

    printf(", %d", y);
    return 0;
}