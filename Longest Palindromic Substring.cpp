class Solution {
public:
    string palinret(string s,int l,int r){
       
        while(l>=0 && r<s.length() && s[l]==s[r]){
            l--;
            r++;
        }
        
        return s.substr(l+1,r-l-1);
    }
    string longestPalindrome(string s) {
        string ans=s.substr(0,1);
        int n=s.length();
        if(s.length()<=1){
            return s;
        }
        
        for(int i=0;i<n-1;i++){
           string even=palinret(s,i,i+1);
           string odd=palinret(s,i,i);
          
           if (odd.length() > ans.length()) {
                ans = odd;
           }
           if (even.length() > ans.length()) {
                ans = even;
           }
           
           
        }
        return ans;
    }
};
