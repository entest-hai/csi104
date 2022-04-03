//===================================================================
// Hai Tran 02 APR 2022
// write a function to print binary of an integer number
//===================================================================

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void write_array_to_bin(){
    unsigned long N = 1000;
    int *buffer = (int *)malloc(N);

    // random seed
    srand((unsigned int)time(0));
    for (unsigned long i = 0; i < N; i++){
        buffer[i] = rand() % 128;
    }

    FILE *ptr;
    ptr = fopen("data.bin", "wb");
    fwrite(buffer, N * sizeof(int), 1, ptr);
    fclose(ptr);

}

int main()
{
    print_binary(128);
    // write_array_to_bin();
    return 0;
}
