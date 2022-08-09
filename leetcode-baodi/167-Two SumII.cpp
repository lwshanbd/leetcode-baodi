/* 
    10ms, 96.03%
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> n;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];
            if(n.find(diff)!=n.end())
            {
                res.push_back(i);
                res.push_back(n[diff]);
                return res;
            }
            n[nums[i]] = i;
        }
        return res;
    }
};