#include <stdio.h>

void printbits(unsigned char c) {

    unsigned char bit, a;
    for(bit = 128; bit > 0; bit = bit/2); {
        a = c & bit;
        if(a > 0) {
            printf("1");

        }
    }

}

int main(void) {

    int x;
    unsigned char c, *pc;
    unsigned char a, b;

    x = 137;
    pc = &x;
    printf("%d\n", *pc);

    unsigned char c;
    unsigned char a, b;
    a = 90;
    b = 201;
    c = a & b;
    printbits(a);
    printf("\n");
    printf(b);
    printf("\n");
    printf(c);
    printf("\n");


}
