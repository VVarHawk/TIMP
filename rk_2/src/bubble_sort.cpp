#include "bubble_sort.h"

void bubble_sort(std::vector<double> &arr)
{
    size_t arr_size = arr.size();

    for(int i = 0; i < arr_size; ++i)
    {
        for(int j = i; j > 0; --j)
        {
            if(arr[j - 1] > arr[j])
            {
                double x = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = x;
            }
        }
    }
}
