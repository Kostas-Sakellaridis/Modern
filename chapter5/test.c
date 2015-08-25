//
// Created by kosta on 8/25/2015.
//

#include "stdio.h"

int main() {

    float commission, value;
    printf("Enter value of trade: ");
    scanf("%f", &value);

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else commission = 155.00f + 0.11f * value;


    return 0;
}