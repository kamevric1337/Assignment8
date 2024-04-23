#include<iostream>

void capPhat(int**& matrix, int row, int col)
{
    matrix = new int*[row];
    for(int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }
}

void nhapMang(int** matrix, int row, int col)
{
    for(int i = 0;i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void inMang(int** matrix, int row, int col)
{
    std::cout << "\nIn ra ma tran: \n" ;
    for(int i = 0;i < row; i++)
    {
        std::cout << "[  ";
        for(int j = 0; j < col; j++)
        {
            std::cout <<  matrix[i][j] << "  ";
        }
        std::cout << "] ";
        std::cout << std::endl;
    }
}

int max_of_matrix(int** matrix, int row, int col)
{
    int max = matrix[0][0];
    for(int i = 0;i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(matrix[i][j] > max)
            {
                max = matrix[i][j];         
            }
        }
    }
    return max;
}

int min_of_matrix(int** matrix, int row, int col)
{
    int min = matrix[0][0];
    for(int i = 0;i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(matrix[i][j] < min)
            {
                min = matrix[i][j];         
            }
        }
    }
    return min;
}

int sum_of_matrix(int** matrix, int row, int col)
{
    int sum = 0;
    for(int i = 0;i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

void thuHoi(int**& matrix, int row, int col)
{
    
    for(int i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int sum_of_row(int** matrix, int target_row, int col)
{
    int sum = 0;
    for(int i = 0; i < col; i++)
    {
        sum += matrix[target_row][i];
    }
}

int sum_of_col(int** matrix, int row, int target_col)
{
    int sum = 0;
    for(int i = 0; i < row; i++)
    {
        sum += matrix[i][target_col];
    }
}

int max_on_col(int** matrix, int row, int target_col)
{
    int max = matrix[0][target_col];
    for(int i = 0; i < row; i++)
    {
        if(matrix[i][target_col] > max)
        {
            max = matrix[i][target_col];
        }
    }
}

int main()
{
    int row, col;
    std::cout << "Nhap hang va cot: ";
    std::cin >> row >> col;
    int **matrix = 0;

    capPhat(matrix, row, col);
    nhapMang(matrix, row, col); // Nhap theo hang 
    inMang(matrix, row, col);

    std::cout << "\n" << sum_of_matrix(matrix, row, col);

}