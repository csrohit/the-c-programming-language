#include <stdio.h>
int atoi(char[]);

int main()
{
    char s[] = "123";
    printf("%d", atoi(s));

    return 0;
}

int atoi(char s[])
{
    printf("Input variable is : %s\n", s);
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}
