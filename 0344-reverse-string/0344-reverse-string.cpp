class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int b=0;
        int e=n-1;
        while(b<e){
            swap(s[b++],s[e--]);
        }
        
        
    }
};