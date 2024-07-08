class Solution {
public:
    /*bool anagram(string s, string t) {
       int ch[26]={0};
       if(s.length()!=t.length()){
           return false;
       }
       for(int i=0;i<s.length();i++){
          ch[s[i]-'a']++;
       }
       for(int i=0;i<t.length();i++){
          ch[t[i]-'a']--;
       }
       for(int i=0;i<26;i++){
        if(ch[i]!=0){
            return false;
        }
       }
       return true;

    }*/
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        /*vector<vector<string>>v;
        int n=strs.size();
        if(strs.size()==0){
            v.push_back(strs);
            return v;
        }
        if(strs.size()==1){
            v.push_back(strs);
            return v;
        }
        vector<int>arr(n);
        for(int i=0;i<strs.size();i++){
            vector<string>temp;
            if(arr[i]==0){
               temp.push_back(strs[i]);
               arr[i]=1;
               for(int j=i+1;j<strs.size();j++){
                   if(arr[j]==0 && anagram(strs[i],strs[j]))
                   {
                      temp.push_back(strs[j]);
                      arr[j]=1;
                   }
               }
               v.push_back(temp);
            }
           
        } 
        return v;*/
        unordered_map<string, vector<string>> hash;
        for (auto& s : strs) {
            string t = s;
            sort(t.begin(), t.end());
            hash[t].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& [k, v] : hash) result.push_back(v);
        return result;
    
    }
};
