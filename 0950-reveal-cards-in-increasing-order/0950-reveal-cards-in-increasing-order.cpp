class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        sort(deck.begin(),deck.end());
        vector<int>ans(n);
        deque<int>dq;
        for(int i=0;i<n;i++){
            dq.push_back(i);
        }
        int chance=0;
        int flip=0;
        while(dq.size()>0){
            if(flip==0){
                ans[dq.front()]=deck[chance++];
                dq.pop_front();
            }
            else{
               int last=dq.front();
                dq.pop_front();
                dq.push_back(last);
            }
            if(flip==0){
                flip=1;
            }else{
                flip=0;
            }
        }
        return ans;
        
    }
};