#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> prices = {7,1,3,2,6,5};
    int profit = 0;

    for(int i=1; i<prices.size(); i++){
        if(prices[i] > prices[i-1]){
            profit += prices[i] - prices[i-1];
            cout << "prices[i]: " << prices[i] << endl;
            cout << "prices[i-1]: " << prices[i-1] << endl;
            cout<< profit << endl;
        }
    }

    cout << "final: " <<profit << endl;

    return 0;
}