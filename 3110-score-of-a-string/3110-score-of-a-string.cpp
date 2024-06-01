class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length();
        int sum=0;
        for(int i=0;i<n-1;i++){
            int j=i+1;
            sum=sum+abs(s[i]-s[j]);
        }
        
        return sum;
        
    }
};