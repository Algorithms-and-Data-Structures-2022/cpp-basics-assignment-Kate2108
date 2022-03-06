#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return abs(left*left - right*right);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if (mask < 0 || bit_pos < 0){
      return false;
    }

    return false;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    if (left >= middle && left >= right){
      return left;
    }
    else if (right >= middle && right >= left ){
      return right;
    }
    else{
      return middle;
    }
  }

  // Task 4
  int swap_args(int *left, int *right) {
    int l = *left;
    int r = *right;
    if(left == 0 || right == 0){
      return l, r;
    }
    int swap = l;
    l = r;
    r = swap;
    return l, r;

  }

  // Task 5
  int arr_sum(int *arr, int length) {

    // Write your code here ...

    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    // Write your code here ...

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
