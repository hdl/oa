#include <stdio.h>
#include <stdlib.h>

int grayCheck(char term1, char term2)
{
    int total=0;
    char x=0;
    x=term1^term2; // for every bit, if diff->1, if same->0
    while(x!=0){   // count number of 1
        x=x&(x-1);
        total++; 
    }
    return total==1?1:0; // if only one 1, they are succssive gray code by defination
}

int main()
{
    char term1=(char)0x81, term2=(char)0x80;
    int out;
    out = grayCheck(term1, term2);
    printf("is:%d", out);
}
