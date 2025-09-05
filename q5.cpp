class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        vector<int>v = nums;
        for(int i = 1 ; i < v.size() ; i++)
        { 
  
           v[i] = v[i - 1] + nums[i];
           
        }

        for(int start = 0 ; start < nums.size() ; start++){
            for(int end = start ; end < nums.size() ; end++){

                int sum = v[end] - (start > 0 ? v[start - 1] : 0);
                if(k == 0 ){
                    if(sum == 0)
                    return true; 

               
                }
                else {
                    if(sum % k ==0)
                    return true;
                }
            }
        }

        return false;
        
    }
};