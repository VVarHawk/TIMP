#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

//#include "googletest/googletest/include/gtest/gtest.h"
//#include "googletest/googlemock/include/gmock/gmock.h"

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

TEST(sort_test, bubble_sort_test)
{
    const int ARR_SIZE = 20;

    std::vector<double> arr_expected, arr_actual;
    for(int i = 0; i < ARR_SIZE; i++)
    {
        double x = rand() % 100;
        arr_expected.push_back(x);
        arr_actual.push_back(x);
    }

    std::sort(arr_expected.begin(), arr_expected.end());
    bubble_sort(std::ref(arr_actual));

    for(int i = 0; i < ARR_SIZE; ++i)
    {
        EXPECT_EQ(arr_expected[i], arr_actual[i]);
    }

}
