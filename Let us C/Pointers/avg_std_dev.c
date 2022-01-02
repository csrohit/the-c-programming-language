#include <stdio.h>
#include<math.h>


void calc(int[], int *, float *, float *);
int getLen(int[]);
int calSum(int[]);
float getSd(int[], float);


int main(int argc, char const *argv[])
{
    int arr[5], sum;
    float sd, avg;
    
    printf("Enter 5 values: ");
    for(int i=0; i<5; i++){
        scanf("%d", arr + i);
    }

    printf("Numbers entered are: ");
        for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    calc(arr, &sum, &avg, &sd);
    printf("Sum: %d", sum);
    printf("\nAvg: %.2f", avg);
    printf("\nStandard Deviation: %.2f", sd);
    
    return 0;
}

/**
 * @brief Calculates the sum, average and standard deviation for a 5 element array  
 * 
 * @param arr array of 5 integers
 * @param sum pointer to sum variable
 * @param avg pointer to average variable
 * @param sd pointer to standard deviation variable
 */
void calc(int arr[], int *sum, float *avg, float *sd)
{
    *sum = calSum(arr);
    *avg = ((float) *sum)/getLen(arr);
    *sd = getSd(arr, *avg);
}

/**
 * @brief returns sum of array elements
 * 
 * @param arr array of 5 elements
 * @return int sum of elements
 */
int calSum(int arr[])
{
    int sum = 0;
    
    for (int i = 0; i < getLen(arr); i++)
    {
        sum += arr[i];
    }
    return sum;
}

/**
 * @brief Get the length of array provided
 * 
 * @param a array
 * @return int length of array
 */
int getLen(int a[]){
    // return sizeof(a)/sizeof(a[0]);
    return 5;
}


/**
 * @brief Get the standard deviation of array 
 * 
 * @param arr array of 5 integers
 * @param avg avg of array elements
 * @return float standard deviation value
 */
float getSd(int arr[], float avg){
    float sum_mean = 0;
    int len = getLen(arr);
    for (int i = 0; i < len; i++)
    {
        sum_mean += pow(arr[i] - avg, 2);
    }
    sum_mean /= len;
    return sqrt(sum_mean);    
}
