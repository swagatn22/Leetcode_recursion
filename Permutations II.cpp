class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>s;
        vector<vector<int>>res;
        vector<int>ans;
        solve(nums,ans,s);
        for(auto i = s.begin(); i != s.end(); i++){
            res.push_back(*i);
        }
        return res;
    }
    void solve(vector<int>nums, vector<int>ans, set<vector<int>>&s){
        if(nums.size() == 0){
            s.insert(ans);
            return;
        }
        for(int i = 0; i< nums.size(); i++){
            vector<int>newans = ans;
            vector<int>newNum = nums;
            newans.push_back(nums[i]);
            newNum.erase(newNum.begin()+i);
            solve(newNum,newans,s);
        }
    }
};
