
#include <stdio.h>

int fact(int x) {
    int xfact = 1;
    for (int i = 2; i <= x; i++) {
        xfact = xfact * i;
    }
    return xfact;
}

int combination(int n, int r) {
    return fact(n) / (fact(n-r) * fact(r));
}

int main() {
    int row;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 0; i < row; i++) {

        for (int k = 1; k <= row-i; k++) {
            printf("   ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%5d", combination(i,j));
        }

        printf("\n");
    }

    return 0;
}
