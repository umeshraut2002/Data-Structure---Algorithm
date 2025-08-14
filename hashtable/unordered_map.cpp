#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> num = {1,1,2,3,2,3, 6, 6, 6};
    
    // Unordered map 

    unordered_map<int, int> mpp;

    for(int i = 0; i < num.size(); i++){
        mpp[num[i]]++;
    }

    for(auto it:mpp){
        cout << it.first << "->" << it.second << endl;        
    }

    return 0;
}