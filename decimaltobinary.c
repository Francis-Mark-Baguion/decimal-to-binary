#include <stdio.h>
#include <stdlib.h>

long binary (int);

int main()
{
    long bin;
    int dec;

    printf("Input any decimal number: ");
    scanf("%d", &dec);

    bin = binary(dec);
    printf("The binary value is : %ld\n", bin);

    return 0;
}

// function body
{
    long bin=0, r, f=1;
    while (dec!=0)
    {
        r = dec%2;
        bin = bin+r*f;
        f = f*10;
        dec = dec/2;
    }
    return bin;

}
