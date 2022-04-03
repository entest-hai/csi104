//===================================================================
// Hai Tran 02 APR 2022
// write a function to print binary of an integer number
//===================================================================

#include <stdio.h>

void print_binary(unsigned int number){
    unsigned char byte;
    unsigned char *b = (unsigned char*) &number;
    printf("binary of %d is ", number);
    for (int i = sizeof (number) - 1; i >= 0; i--){
        for (int j = 7; j >=0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    printf("\n");
}

int main()
{
    print_binary(128);
    return 0;
}
