#include<stack>
class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
       int n=s.length();
       for(int i=0;i<n;i++){
          if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
          }
          else if(!st.empty()){
            if(s[i]==')' && st.top()=='('){
                st.pop();
            }
            else if(s[i]==']' && st.top()=='['){
                st.pop();
            }
            else if(s[i]=='}' && st.top()=='{'){
                st.pop();
            }
            else{
                return false;
            }

          }
          else{
            return false;
          }
       }
       if(st.empty()){
        return true;
       }
       return false;


    }
};
