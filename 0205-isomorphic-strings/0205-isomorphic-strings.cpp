class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> str,strr;
        for(int i=0;i<s.length();i++){
            char s1=s[i];
            char s2=t[i];
            
            if(str.find(s1)==str.end() && strr.find(s2)==strr.end()){
                str[s1]=s2;
                strr[s2]=s1;
            }else if(str[s1]!=s2 && str[s2]!=s1){
                return 0;
            }
        }
        return 1;
        
    }
};