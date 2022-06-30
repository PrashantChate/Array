#include <iostream>

int FindSmallestCommonNumber(int* array1, int* array2, int* array3, int array1Size, int array2Size, int array3Size)
{
    int iCount = 0, jCount = 0, kCount = 0;
    int smallestCommomNumber = -1;
    while (iCount < array1Size && jCount < array2Size && kCount < array3Size)
    {
        if (array1[iCount] == array2[jCount] && array2[jCount] == array3[kCount])
        {
            smallestCommomNumber = array1[iCount];
            break;
        }
        else if ((array1[iCount] <= array2[jCount]) && (array1[iCount] <= array3[kCount]))
        {
            ++iCount;
        }
        else if ((array2[jCount] <= array3[kCount]) && (array2[jCount] <= array1[iCount]))
        {
            ++jCount;
        }
        else 
        {
            ++kCount;
        }
    }
    return smallestCommomNumber;
}

int main() 
{
    int array1[7] = { 6,7,10,25,30,63,64 };
    int array2[8] = { 0,4,5,6,7,8,50 };
    int array3[9] = { 1,6,10,14 };

    int num = FindSmallestCommonNumber(array1, array2, array3, 7, 8, 9);
    std::cout << num << std::endl;
    return 0;
}