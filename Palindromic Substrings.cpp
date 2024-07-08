class Solution {
public:
    /*bool palindrome(string s){
        int n=s.length();
        for(int i=0;i<=n/2;i++){
            if(s[i]!=s[n-i-1])
            {
               return false;
            }
        }
        return true;
    }*/
    int palicount(string s,int l,int r){
        int count=0;
        while(l>=0 && r<s.length() && s[l--]==s[r++]){
            count++;
        }
        return count;
    }
    int countSubstrings(string s) {
        /*int sum=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            string st="";
            for(int j=i;j<n;j++){
               st.push_back(s[j]);
               if(palindrome(st)){
                    sum++;
               }

            }
        }*/
        int sum=0;
        int even=0;
        int odd=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            even=palicount(s,i,i+1);
            odd=palicount(s,i,i);
            sum+=even+odd;
        }

        return sum;
    }
};
