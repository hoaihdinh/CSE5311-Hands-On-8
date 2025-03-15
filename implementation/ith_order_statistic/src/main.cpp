// Author: Hoai Dinh

#include <chrono>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <functional>
#include <tuple>

#include "sorts.hpp"

#define MIN(x, y) ((x > y) ? y : x)
#define CHUNK_SIZE 5

std::string print_array(int array[], int size) {
    std::stringstream ss;

    ss << "{";
    for(int i = 0; i < size; i++) {
        ss << " " << array[i] << ((i != size-1) ? ", " : "");
    }
    ss << "}";

    return ss.str();
}

int median_of_medians(int array[], int size) {
    if(size == 1) {
        return array[0];
    }

    int num_chunks = (size + CHUNK_SIZE - 1) / CHUNK_SIZE;
    int *chunk_medians = new int[num_chunks+1];

    for(int i = 0; i < num_chunks; i++) {
        int l = i*CHUNK_SIZE;
        int r = MIN(CHUNK_SIZE*(i+1), size) - 1; // prevent the last chunk from being able to index out of bounds
        quick_sort(array, l, r, true);
        chunk_medians[i] = array[l + (r - l) / 2];
    }

    int true_median = median_of_medians(chunk_medians, num_chunks);
    delete [] chunk_medians;

    return true_median;
}

int ith_order_stat(int array[], int left, int right, int ith_order) {
    int pivot = median_of_medians(array + left, right - left + 1);
    
    int i = right;
    while(array[right] != pivot) {
        if(array[i] == pivot) {
            SWAP(array[i], array[right]);
        }
        i--;
    }
    
    int result = qsort_partition(array, left, right, false);

    if(result+1 == ith_order) {
        return array[result];
    } else if(result+1 >= ith_order) {
        return ith_order_stat(array, left, result - 1, ith_order);
    } else {
        return ith_order_stat(array, result + 1, right, ith_order);
    }
}

int main() {
    int array[] = {
        557, 811, 650, 147, 319, 844, 439, 767, 279, 643, 51, 33,
        3, 135, 938, 321, 722, 9, 787, 149, 32, 447, 569, 484, 468,
        352, 540, 54, 66, 961, 294, 791, 993, 746, 825, 742, 856, 337, 
        315, 511, 930, 817, 544, 713, 630, 710, 665, 878, 709, 425
    };
    int size = 50;

    int ith_order = 1;
    std::cout << "Array: " << print_array(array, size) << std::endl;

    std::cout << "Input which ith order statistic you would like to see (by default will be 1st): ";
    std::cin >> ith_order;

    if(ith_order > size) {
        ith_order = 1;
    }

    std::string suffix = "";
    switch(ith_order % 10) {
        case 1:
            suffix = "st";
            break;
        case 2:
            suffix = "nd";
            break;
        case 3:
            suffix = "rd";
            break;
        default:
            suffix = "th";
    }
    if(ith_order % 100 <= 20) {
        suffix = "th";
    }

    std::cout << ith_order << suffix << " order statistic of the Array is " << ith_order_stat(array, 0, size - 1, ith_order) << std::endl;
    return 0;
}
