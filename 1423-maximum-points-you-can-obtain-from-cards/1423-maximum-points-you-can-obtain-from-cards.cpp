class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
        int maxsum=0;
        for(int i=0;i<k;i++){
            lsum=lsum+cardPoints[i];
            maxsum=lsum;
        }
        int ridx=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum=lsum-cardPoints[i];
            rsum=rsum+cardPoints[ridx];
            ridx=ridx-1;
            
            maxsum=max(maxsum,lsum+rsum);
        }
        
        return maxsum;
    }
};