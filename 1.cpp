#include<iostream>
#include<math.h>

int find_special_element(int* array, int n, bool (*comparisonType)(int ,int))
{
    int special_element = array[0];
    for(int i = 0 ; i < n; i++)
    {
        special_element = comparisonType(array[i], special_element)? array[i]: special_element;
    }
    return special_element;
}

bool find_max_element(int a, int b)
{
    return a > b;
}

bool find_min_element(int a, int b)
{
    return a < b;
}

bool find_abs_max_element(int a, int b)
{
    return abs(a) > abs(b);
}

bool find_abs_min_element(int a, int b)
{
    return abs(a) < abs(b);
}

int main()
{
    int array[100] = { -1, -2, -3, -4 ,5 , 6, 7 , 8, 9 ,1};
    int n = 10;
    std::cout << "Phan tu co gia tri lon nhat: " << find_special_element(array, n, find_max_element) << '\n';
    std::cout << "Phan tu co gia tri nho nhat: " << find_special_element(array, n, find_min_element) << '\n';
    std::cout << "Phan tu co gia tri tuyet doi lon nhat: " << find_special_element(array, n, find_abs_max_element) << '\n';
    std::cout << "Phan tu co gia tri tuyet doi nho nhat: " << find_special_element(array, n, find_abs_min_element) << '\n';
}