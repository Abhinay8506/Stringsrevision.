class Solution {
public:
    void upper(string &s){
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+'a'-'A';
            }
        }
    }
    void alpha(string &s){
        string temp;
        for(int i=0;i<s.length();i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
                temp+=s[i];
            }    
        }
        s=temp;
    }
    bool check(string &s,int i,int j){
        if(i>=j)
           return true;
        if(s[i]!=s[j])
           return false;
        return check(s,i+1,j-1);
    }
    bool isPalindrome(string s) {
        upper(s);
        alpha(s);
        cout<<s;
        return check(s,0,s.length()-1);

    }
};
