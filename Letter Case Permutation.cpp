class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        string op = "";
        vector<string>ans;
        solve(S,op,ans);
        return ans;
    }
    void solve(string s, string op, vector<string>&ans){
        if(s.size() == 0){
            ans.push_back(op);
            return;
        }
        int i = 0;
        if(s[i] >= '0' && s[i] <= '9'){
            string op1 = op;
            op1 += s[i];
            s.erase(s.begin()+0);
            solve(s,op1,ans);
        }else{
            string op1 = op;
            string op2 = op;
            op1 += tolower(s[i]);
            op2 += toupper(s[i]);
            s.erase(s.begin()+0);
            solve(s,op1,ans);
            solve(s,op2,ans);
        }
    }
};
