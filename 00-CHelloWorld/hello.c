#include <stdio.h>

int main()
{
    printf("Hello, world!");
    FILE *f = fopen("output.txt", "w");
    fprintf(f, "Hello world!");

    fclose(f);
    return 0;
}