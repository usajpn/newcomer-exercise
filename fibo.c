/*
 * Sample Fibonacchi Numbers for LINK Newcomers
 * Filename: fibo.c
 * @author usa
 */

#include <stdio.h>

void fibo(int max);     // Prints fibonacchi Numbers

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: ./fibo [len]\n");
        return -1;
    }

    int len;            // Length of the output fibonacchi numbers

    len = atoi(argv[1]);
    fibo(len);

    return 0;
}

/*
 * * Algorithm Explanation *
 *
 *      0          1          1          2 ...
 * [tail_num] [head_num]
 *
 *      0          1          1          2 ...
 *            [tail_num] [head_num]
 */

void fibo(int len)
{
    int i;              // Counter for loop
    int head_num = 1;   // Head number(Number in right side is head)
    int tail_num = 0;   // Tail number => We print this number to console
    int tmp = 0;        // Temporary variable

    for (i=0; i<len; i++) {
        printf("%d ", tail_num);
        tmp = head_num + tail_num;
        tail_num = head_num;
        head_num = tmp;
    }
    printf("\n");
}
