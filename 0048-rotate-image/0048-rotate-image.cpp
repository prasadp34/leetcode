#include<bits/stdc++.h>

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<n;i++){
            int s=0;
            int e=m-1;
            while(s<=e){
                swap(matrix[i][s],matrix[i][e]);
                s++;
                e--;
            }
        }
    }
};