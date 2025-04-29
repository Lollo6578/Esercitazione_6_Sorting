#pragma once

#include <iostream>
#include <vector>

#include <gtest/gtest.h>
#include "SortingAlgorithm.hpp"

namespace SortLibrary {

TEST(TestSorting, TestBubbleSort)
{
    std::vector<int> v = {3, 13, 5, 10, 23, 7, 9, 4, 6, 12};
    BubbleSort<int>(v);
    std::vector<int> sortedV = {3, 4, 5, 6, 7, 9, 10, 12 ,13, 23};
    EXPECT_EQ(v, sortedV);
}

TEST(TestSorting, TestHeapSort) 
{   
    std::vector<int> v = {3, 13, 5, 10, 23, 7, 9, 4, 6, 12};
    HeapSort<int>(v);
    std::vector<int> sortedV = {3, 4, 5, 6, 7, 9, 10, 12 ,13, 23};
    EXPECT_EQ(v, sortedV);
  


}
}

