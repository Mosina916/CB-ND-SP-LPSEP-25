class Solution {
public:
     void geerateparenthesis(vector<string> &ans,int n,int oc,int cc,string s){
        if(cc==n){
            ans.push_back(s);
            return;

        }
        if(oc<n){//3 3
            geerateparenthesis(ans,n,oc+1,cc,s+'(');
        }
        if(cc<oc){
        geerateparenthesis(ans,n,oc,cc+1,s+')');
        }

     }
    vector<string> generateParenthesis(int n) {

        vector<string> ans;
        geerateparenthesis(ans,n,0,0,"");
        return ans;
        
    }
};