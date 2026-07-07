#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r, c1, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c1);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &b[i][j]);

    printf("Sum of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c1; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}