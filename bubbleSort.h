#include <iostream>

using namespace std;

/**
 *
 * bubble sort
 *
 **/

void bubbleSort(int array[], int size)
{
    bool isChange = false;
    int mid;

    for (int i = 0; i < size; i++)
    {
        isChange = false;
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                mid = array[j];
                array[j] = array[j + 1];
                array[j + 1] = mid;
                isChange = true;
            }
        }
        if (isChange == false)
        {
            return;
        }
    }
}