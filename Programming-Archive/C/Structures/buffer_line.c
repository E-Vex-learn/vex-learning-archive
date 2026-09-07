#include <stdio.h>
#include <stdlib.h>
#include <string.h>_

typedef struct
{
    char *chars;
    int length;
} BufferLine;

int main(void)
{
    BufferLine buflin;

    buflin.chars = malloc(strlen("Hello") + 1);

    if (buflin.chars == NULL)
        return -1;

    strcpy(buflin.chars, "Hello");

    return 0;
}