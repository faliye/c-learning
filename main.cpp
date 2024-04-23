#include <iostream>
#include "bubbleSort.h"

using namespace std;

int main()
{
    int arr[] = {
        1,
        2,
        3,
        4,
        5,
        2,
        6,
    };

    bubbleSort(arr, 7);
    for (int i : arr)
    {
        cout << i << endl;
    }
}
