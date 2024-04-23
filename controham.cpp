#include<iostream>
#include<math.h>

int find_special_value(int* arr, int n, int(*comparisonType)(int, int))
{
    int special_value = arr[0];
    for(int i = 1; i < n; i++)
    {
        special_value = comparisonType(special_value, arr[i]);
    }
    return special_value;
}

int find_max(int a, int b)
{
    if(a < b)
    {
        return b;
    }
    return a;
}
int find_min(int a, int b)
{
    if(a > b)
    {
        return b;
    }
    return a;
}
int find_abs_max(int a, int b)
{
    if(abs(a) < abs(b))
    {
        return abs(b);
    }
    return abs(a);
}
int find_abs_min(int a, int b)
{
    if(abs(a) > abs(b))
    {
        return abs(b);
    }
    return abs(a);
}
int main()
{
    int array[100] = { -1, -2, -3, -4 ,5 , 6, 7 , 8, 9 ,1};
    int n = 10;
    std::cout << "Gia tri lon nhat: " << find_special_value(array, n, find_max) << '\n';
    std::cout << "Gia tri nho nhat: " << find_special_value(array, n, find_min) << '\n';
    std::cout << "Gia tri tuyet doi lon nhat: " << find_special_value(array, n, find_abs_max) << '\n';
    std::cout << "Gia tri tuyet doi nho nhat: " << find_special_value(array, n, find_abs_min) << '\n';
}