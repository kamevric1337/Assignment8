#include<iostream>

void array_calculation(float* array1, float* array2, float* &array, int n, float (*array_operator)(float, float))
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

int main()
{

}