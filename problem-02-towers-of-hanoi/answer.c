#include <stdio.h>


void move(int n, int start, int end, int tmp)
{
    if (n == 1) {
        printf("%d -> %d\n", start, end);
        return;
    }
    move(n-1, start, tmp, end);
    move(1, start, end, tmp);
    move(n-1, tmp, end, start);
}

int main(void)
{
    int n = 3;

    // printf("Please input an integer: ");
    // scanf("%d", &num);
    
    move(n, 1, 3, 2);

    return 0;
}