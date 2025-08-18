vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCount = 0;
        int product = 1;

        for(int x : nums){
            if(x == 0) {
                zeroCount++;
            }
            else{
                product *= x;
            }
        }

        for(int i = 0; i < nums.size(); i++){
            if(zeroCount > 1){
                nums[i] = 0;
            }
            else if(zeroCount == 1){
                nums[i] = (nums[i] == 0) ? product : 0;
            }
            else{
                nums[i] = product / nums[i];
            }
        }

        return nums;

    }