class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>ans;
        solve(nums,res,ans);
        return res;
    }
    void solve(vector<int>nums,vector<vector<int>>&res,vector<int>ans){
        if(nums.size() == 0){
            res.push_back(ans);
            return;
        }
        vector<int>v1 = ans;
        vector<int>v2 = ans;
        v2.push_back(nums[nums.size()-1]);
        nums.pop_back();
        solve(nums,res,v1);
        solve(nums,res,v2);
    }
};
