#include <stdio.h>

int main(){
    int znamky[10] = {3, 1, 2, 2, 2, 1, 1, 3, 1, };
    float prumer = 0;

    for (int i = 0; i < sizeof(znamky) / sizeof(int); i++){
        prumer += znamky[i];
    }
    prumer /= sizeof(znamky)/sizeof(int);
    printf("%.2f\n", prumer);


    return 0;
}