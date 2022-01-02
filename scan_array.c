#include<stdio.h>
#include<stdlib.h>



int main(int argc, char const *argv[])
{
    
    int size, temp, *arr, i;

    printf("Enter total number of elements: ");
    scanf("%d", &size);

    // allocate memory for the array
    arr = (int *) malloc(sizeof(int)*size);     // arr points to memory of size of the int

    for (i = 0; i < size; i++)
    {
        scanf("%d", (arr + i)); // we pass in the address for the entered value to be stored
    }
    for(i = 0; i<size; i++) printf("%d\n", arr[i]);
    

    return 0;
}
