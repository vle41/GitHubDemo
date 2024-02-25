#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    printf("%c", argv[4][0]); // line A
    printf("%d",argc); // line B
    return 0;
}