/*
 * The code is taken from The C Book chaper 5.3.2 Arrays and pointers.
 */

#include <stdio.h>
#include <stdlib.h>
#define ARSZ 20

void main(void)
{
    /*
     * C doesn't really understand array indexing, an expression like x[n] is
     * translated into *(x+n) and use made of the fact that an array name is 
     * concerted into a pointer to the array's first element .
     * Thay's why, amongest other things, array elements count from zero:
     */
    int ar[ARSZ], i;

    /*
     * if x is an array name, then in an expression, x is equivalent to &x[0],
     * is equivalent to &x[0], i.e. a pointer to the first element of the array.
     */
    printf("Address of array name, %p\n", ar);
    printf("Address of first element of the, %p\n", &ar[0]);

    /*
     * Since *(&x[0]) uses the pointer to get to x[0], *(&x[0] + 5) is the same
     * as *(x + 5) which is the same as x[5]. 
     * If x[5] is translated into *(x + 5), and the expression x + 5 gives the
     * same result as 5 + x, then 5[x] should give the identical result to x[5].
     */
    for (i = 0; i < ARSZ; i++) {
        ar[i] = i; /* translate into *(ar + i) */
        i[ar]++; /* translate into *(i + ar) */
        printf("ar[%d] now = %d\n", i, ar[i]);
    }
    printf("15[ar] = %d\n", 15[ar]);
    exit(EXIT_SUCCESS);
}
