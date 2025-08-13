#include<bits/stdc++.h>
using namespace std;

int main(){

    int nums[] = {1,1,2};
    int size = sizeof(nums);
    int k = 0;

    for(int i = 0; i < size; i++){
        if(nums[i] != nums[k]){
            nums[++k] = nums[i];

            cout << "---" << nums[++k] << endl;
        }
    }

    cout<<k+1<<endl;

    return 0;
}

// [1,1,2,3,4,2,3,4,5]
// output: [1,2,3,4,5]
// k = 5