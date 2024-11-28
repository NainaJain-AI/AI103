#include <stdio.h>

int main() {
    int v = 10;
    int* ptr = &v;  
    printf("normalVariable: %d\n", v);
    *ptr = 20;
    printf("after modification: %d\n", v);

    return 0;
}

