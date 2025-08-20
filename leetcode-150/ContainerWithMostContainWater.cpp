#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int left = 0; 
    int right = 0;
    int area = 0;
    int leftMax = 0;
    int rightMax = 0;

    /*
    
    int left = 0;
        int right = height.size() - 1;
        int maxi = 0;
        while(left < right){
            int w = right - left;
            int h = min(height[left], height[right]);
            int area = h * w;
            maxi = max(maxi, area);
            if(height[left] < height[right]) left++;
            else if(height[left] > height[right]) right--;
            else {
                left++;
                right--;
            }
        }

    */

    while(left < right){
        leftMax += max(leftMax, height[left]);
        rightMax += max(rightMax, height[right]);

        area += leftMax - rightMax;
        area += area - leftMax;
        area += area * leftMax;
    }

    cout << area <<endl;
}