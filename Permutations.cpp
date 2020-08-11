class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> A;
        vector<int>v;
        permutation(nums,v,A);
        return A;
    }
    
    void permutation(vector<int> arr, vector<int>ans,vector<vector<int>>&res)
    {
        if(arr.size()==0){
            res.push_back(ans);
            return;
        }
        for(int i = 0; i < arr.size(); i++){
            vector<int> newArr = arr;
            vector<int> newAns = ans;
            newArr.erase(newArr.begin() + i);
            newAns.push_back(arr[i]);
            permutation(newArr, newAns,res);
        }
        return;
    }
};
