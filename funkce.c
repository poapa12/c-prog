#include <stdio.h>

int pp (int num);

int main(){
    int x, result;

    x = 5;
    result = pp(x);
    printf("%i", result);
}

int pp (int num){
    int y;

    y = num * num;
    return(y);
}