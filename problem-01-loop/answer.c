#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, k = 0, n = 0;

    for (i = 4, j = 1, k = 0; k < 5; k++,i--,j+=2) {
        for (n = i; n > 0; n--) {
            printf(" ");
        }
        for (n = 1; n <= j; n++) {
            printf("*");
        }

        printf("\n");
    }

    for (i = 1, j = 7, k = 0; k < 4; k++,i++,j-=2) {
        for (n = 1; n <= i; n++) {
            printf(" ");
        }
        for (n = j; n > 0; n--) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}