#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int nums[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            
            if(nums[j] > nums[j+1]){

                swap(nums[j], nums[j+1]);

            }

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