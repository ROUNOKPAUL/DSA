class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        long long  N=n*n;
        long long gridsum=0;
        long long gridsqsum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                gridsum+=grid[i][j];
                gridsqsum+=grid[i][j]* grid[i][j];
            }
        }
        long long sum=(N*(N+1))/2;//expected sum of first N natural numbers
        long long sqsum=(N*(N+1)*(2*N+1))/6;//expected square sum of first N natural numbers
        int sqDiff=gridsqsum-sqsum;
        int sumDiff=gridsum-sum;
        int a=(sqDiff/sumDiff+sumDiff)/2;
        int b=(sqDiff/sumDiff-sumDiff)/2;
        return {a,b};
    }
};