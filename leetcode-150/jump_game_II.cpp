#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {2,3,1,1,4};
    int reach = 0;
    int last = 0;
    int count = 0;

    for(int i = 0; i < nums.size() - 1; i++){
        reach = max(reach, i + nums[i]);        

        cout << "Reach: " << reach << endl;

        if(i == last){

            cout << "Last: " << last << endl;

            last = reach; 

            cout << "Updated last:" << last  << endl;

            count++;

            cout << "Count: " << count << endl;
        }
    }

    cout << count <<endl;

    return 0;
}