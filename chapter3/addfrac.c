//
// Created by kosta on 8/22/2015.
//

#include "stdio.h"

int gcd(int, int);

int main() {
    printf("Enter first fraction: ");
    int num1, denom1;
    scanf("%d / %d", &num1, &denom1);
    printf("Enter second fraction: ");
    int num2, denom2;
    scanf("%d / %d", &num2, &denom2);

    int numRes = num1 * denom2 + num2 * denom1;
    int denomRes = denom1 * denom2;
    int g = gcd(numRes, denomRes);


    printf("Result is : %d/%d", numRes/g, denomRes/g);

    return 0;

}

int gcd(int x, int y) {
    int z = (x < y) ? x : y;
    int result = 1;

    for (int i = 2; i <= z; i++) {
        if (x % z == 0 && y % z == 0)
            result = i;
    }
    return result;
}