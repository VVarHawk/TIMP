#include "bubble_sort.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"


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
