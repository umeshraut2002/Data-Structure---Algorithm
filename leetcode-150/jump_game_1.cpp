
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3,2,1,0,4};
    int reachable = 0;

    for(int i = 0; i < nums.size(); i++){
        if(i > reachable){
            cout << "false::" << reachable << endl;
        }
        reachable = max(reachable, i + nums[i]);

        cout << reachable << "i::" << i << "nums[i]::" << nums[i] << "+" << i + nums[i] << endl; 
    };

    // cout << "true" << endl;

    return 0;
    
}