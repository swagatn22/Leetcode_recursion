class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        string op = "";
        vector<string>res;
        solve(op,open,close,res);
        return res;
    }
    void solve(string op,int open, int close, vector<string>&res){
        if(open == 0 && close == 0){
            res.push_back(op);
            return;
        }
        if(open != 0){
            string op1 = op + "(";
            solve(op1,open-1,close,res);
        }
        if(open < close){
            string op1 = op + ")";
            solve(op1,open,close-1,res);
        }
    }
};
