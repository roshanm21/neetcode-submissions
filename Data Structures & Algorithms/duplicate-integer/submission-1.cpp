class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool flag = false;
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                flag = true;
                break;
            }
        }
        return flag;
    }
};