#include <stdio.h>
#include <stdlib.h>



int myrealloc(int *x, int m, int n) {

    int *y;
    if(m == 0) {
        return x;
    }

    y = (int *)malloc(n * sizeof(int));
    if(m > n) {
        memcpy(y, x, n);
    }

    else if(m < n) {
        y = (int *)malloc(n * sizeof(int));
    }

}


int main(void) {

    int *x;
    int n, m, i;

    x = (int*) malloc * sizeof(int);
    srabd(time(0));
    for(int i = 0; i < m; i++) {

         x[i] = rand() % 100;
    }

   for(i = 0; i < m; i++ {

        printf("%2d, ", x[i]);

   }

    printf("\n");
    n = 5;
    x = myrealloc(...);
    for(i = 0; i < n; i++) {

       printf("%2d, ", x[i]);

    }

    printf("\n");
    free(x);

}
