#include<bits/stdc++.h>
using namespace std;

int namr(){
    vector<int> rating = {1,0,2};
    int candy = 0;

    for(int i = 0; i < rating.size(); i++){

        rating[i] = candy + 1;

        if(rating[i] > rating[i+1]){
            candy++;
        }
    }
    
    cout << candy << endl;

    return 0;
}