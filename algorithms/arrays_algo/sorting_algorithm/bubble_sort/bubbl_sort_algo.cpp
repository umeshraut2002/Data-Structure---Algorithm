/*
buble sort iterates over the array always n-1 times
time complexity is not much good TM : big O(n*n)
sorting from non sorted elements ascending to descending 
example below run the code and see the output:
*/

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int nums[], int n){
    
    for(int i = 0; i < n - 1; i++){

        bool isSwap = false; // if now swaps performed 

        for(int j = 0; j < n - i - 1; j++){
            
            if(nums[j] > nums[j+1]){

                swap(nums[j], nums[j+1]);
                isSwap = true; // for swaping true 

            }
        }

        if(!isSwap){ // array is already sorted
            return;
        }

    }
}

void print_Array(int nums[], int n){
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
}

int main(){

    int nums[] = {4,1,2,3,5};
    int n = 5;

    bubble_sort(nums, n);
    print_Array(nums, n);

    return 0;
}