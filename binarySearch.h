/**
 *
 * binarySearch 二分法　快速的に目標値を調べる
 *
 **/

int binarySearch(const int array[], int size, int value)
{
    int first = 0, last = size - 1, middle;

    while (first <= last)
    {
        middle = (first + last) / 2;

        if (array[middle] == value)
        {
            return middle;
        }
        if (array[middle] > value)
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
    }
    return -1;
}