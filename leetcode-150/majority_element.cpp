#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,1,2,3,3,4,2,2,2}; // 9 / 2 = 4 
    map<int, int>mpp;

    for(int i = 0; i < nums.size(); i++){
        mpp[nums[i]]++;
    }

    for(auto it:mpp){
        if(it.second > (nums.size() / 2)){
            cout << it.first << endl;
        }
    }

    return 0;

}