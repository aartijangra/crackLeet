class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int l=0; int r=k-1;
        int sum=0;
        int maxsum=0;
        int rsum=0; int lsum=0;
        for(int i=l; i<=r; i++){
            lsum+=cardPoints[i];
            
        }
        maxsum = lsum;
        int index=n-1;
        for(int j=r; j>=0; j--){
            lsum=lsum-cardPoints[j];
            rsum=rsum+cardPoints[index];
            index--;
            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};