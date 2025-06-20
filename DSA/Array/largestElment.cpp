// Largest Element
// 100
// Easy
// Hint
// Given an array of integers nums, return the value of the largest element in the array


// Examples:
// Input: nums = [3, 3, 6, 1]

// Output: 6

// Explanation: The largest element in array is 6

// Input: nums = [3, 3, 0, 99, -40]

// Output: 99

// Explanation: The largest element in array is 99


#include <iostream>
#include <climits>
using namespace std;

int largestElement(int nums[], int size){
    int largest = INT_MIN;

    for(int i = 0; i < size; i++){
        largest = max(nums[i], largest);
    }

    return largest;
}

int main(){

    int nums[] = {3, 3, 6, 1};
    int size = 4;

    cout << largestElement(nums, size);

    return 0;
}