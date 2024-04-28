#include<iostream>

void array_calculation(float* array1, float* array2, float* array, int n, float (*array_operator)(float, float))
{
    while(n--)
    {
        array[n] = array_operator(array1[n], array2[n]);
    }
}

float sum_of_2array(float a, float b)
{
    return a + b;
}

float subtraction_of_2array(float a, float b)
{
    return a - b;
}

float product_of_2array(float a, float b)
{
    return a * b;
}

float division_of_2array(float a, float b)
{
    if(b == 0.0)
    {
        printf("\nERROR\n");
        return 0.0;
    }
    return a / b;
}

void printArray(float* array, int n)
{
    std::cout << "\nYour array : ";
    for(int i = 0; i < n; i++)
    {
        std::cout << " " << array[i] << " ";
    }
}

int main()
{
    const int n = 10;
    float array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float array2[10] = {1, 4, 8, 6, 2, 4, 7, 1, 8, 20};
    float array_sum[10] = {0};
    float array_subtraction[10] = {0};
    float array_product[10] = {0};
    float array_division[10] = {0};

    array_calculation(array1, array2, array_sum, n, sum_of_2array);
    printArray(array_sum, n);
    array_calculation(array1, array2, array_subtraction, n, subtraction_of_2array);
    printArray(array_subtraction, n);
    array_calculation(array1, array2, array_product, n, product_of_2array);
    printArray(array_product, n);
    array_calculation(array1, array2, array_division, n, division_of_2array);
    printArray(array_division, n);
}