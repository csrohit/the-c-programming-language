
#include <stdio.h>

int calSum(int, int);

// GNU c compiler
int main()
{
    int a, b, s;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    s = calSum(a,b);
    printf("Sum is: %d", s);

    return 0;
}


int calSum(int num1, int naman)
{
    return num1 + naman;
}