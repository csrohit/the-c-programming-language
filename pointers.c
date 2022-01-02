#include <stdio.h>

void swap(int*, int*);

int main(int argc, char const *argv[])
{
    
    int a = 10,b = 20;
    int arr;
    swap(&a, &b);
    return 0;
}


void swap(int *x, int *y){
    printf("value of first arg: %d", *x);
    printf("\nvalue of second arg: %d", *y);
}