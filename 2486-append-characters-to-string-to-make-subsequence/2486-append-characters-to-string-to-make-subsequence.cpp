class Solution {
public:
    int appendCharacters(string s, string t) {
        int s_size=s.length();
        int t_size=t.length();
        int i=0;
        int j=0;
        while(i<s_size && j<t_size){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            if(s[i]!=t[j]){
                i++;
            }
        }
        return t_size-j;
    }
};