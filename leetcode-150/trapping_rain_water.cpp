#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int start = height[0];
    int end = height.size();
    int trapWater = 0;
    int mini = min(start, end);

    for(int i = 1; i < height.size()-1; i++){
        trapWater += mini - height[i];
    }

    cout << trapWater << endl;
}