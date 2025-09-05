//Subarray Sum Equals K

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        vector<int>v = nums;

        vector<int>v2;

        v[0] = nums[0];

        int counter = 0;

        for(int i = 1 ; i< nums.size() ; i++)
           v[i] =  v[i - 1] + nums[i];
          


        for(int start = 0; start < v.size(); start++){
            for(int end = start ; end < v.size() ; end++){

                int sum = v[end];
                if(start > 0)
                {
                   sum -= v[start - 1];
                }
                if(sum == k)
               
                    counter++;
                
            }
        }

        return counter;
        
    }
};