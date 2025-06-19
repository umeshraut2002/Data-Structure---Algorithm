//WAP to find a target index using linear search

#include <iostream>
using namespace std;

int linearSearchFun(int arr[], int size, int tar){

    for(int i = 0; i < size; i++){
        if(arr[i] == tar){
            return i;
        }
    }

    return -1;

}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int tar = 6;

    cout << "Target Found At: " << linearSearchFun(arr, size, tar) << endl;

    return 0;

}