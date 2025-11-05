/* Write a Program in c to display Right angle triangle with numbers */

#include <stdio.h>

void rightAngleTriangleWithNumbers(int n) {
    printf("Right-angle Triangle with Numbers:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int rows = 4;
    rightAngleTriangleWithNumbers(rows);
    return 0;
}
