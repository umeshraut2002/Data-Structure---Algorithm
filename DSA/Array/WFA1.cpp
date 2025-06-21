// 1. Calculate Sum and Product of All Numbers in an Array

// Problem Title: Sum and Product of Array Elements

// Description:
// Given an integer array nums, write a function that returns the sum and the product of all the elements present in the array.


// Input:

//     An integer array nums of size n (1 ≤ n ≤ 10^5)

//     Each element in nums lies in the range [-10^4, 10^4]

// Output:

//     Return a list of two integers: [sum, product]

//         sum: the total sum of all elements.

//         product: the total product of all elements.

// Example:

// Input: nums = [2, 3, 4]
// Output: [9, 24]


#include <iostream>
using namespace std;

int sumOfElement(int nums[], int size){
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum += nums[i];
    }

    return sum;
}

int productOfElement(int nums[], int size){

    int product = 1;

    for(int i = 0; i < size; i++){

        product = nums[i] * nums[i+1];

    }

    return product;

}

int main(){

    int nums[] = {2, 3, 4};
    int size = 3;

    cout << "[" << sumOfElement(nums, size) << "," << productOfElement(nums, size) << "]";

    return 0;
}