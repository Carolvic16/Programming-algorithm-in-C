

#include <stdio.h>
#include <stdlib.h>

int main (){

    int f0 = 0;
    int f1 = 1;
    int fbase = 0;

    printf("%d ", f1);

    for (int i = 0; i <=18; i++){
        fbase = f0 + f1;
        f0 = f1;
        f1 = fbase;
        printf("%d ", fbase);
    }

    return 0;
}
