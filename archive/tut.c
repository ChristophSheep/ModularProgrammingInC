#include <stdio.h>

int writeHello() {
    printf("\nHello World!\n");
    return 0;
}

int writeGoing() {
    printf("\nGoing home!\n");
    return 0;
}

int add(int a, int b) 
{
    return a + b;
}

int main(int argc, char **argv)
{ 
    writeHello();
    writeGoing();
    
    int a = 1;
    int b = 2;
    
    printf("a=1,b=2 => %i", add(a,b));

    return 0;
}