#include <stdio.h>      

void troca(int *a, int *b) {
   int tmp;
   printf("*a = %d, *b =%d\n", *a, *b);
   tmp = *a;
   *a = *b;
   *b = tmp;
   printf("*a = %d, *b = %d\n", *a, *b);

}

int main() {
   int x = 3, y = 4;

   printf("tam = %ld\n", sizeof(int));
   printf("tam = %ld\n", sizeof(int *));
   printf("x = %d, y = %d\n", x, y);
   troca(&x, &y);
   printf("x = %d, y = %d\n", x, y);

}