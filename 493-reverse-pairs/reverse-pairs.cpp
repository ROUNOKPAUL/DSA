class Solution {
public:
    int ans=0;
    void merge(vector<int>&a, int l,int m, int r){
        int leftsize=m-l+1;
        int rightsize=r-m;
        vector<int>left(leftsize),right(rightsize);
        for(int i=0;i<leftsize;i++){//push the data into the left array
            left[i]=a[l+i];
        }
        for(int i=0;i<rightsize;i++){
            right[i]=a[m+1+i];
        }
        int j=0;
        for(int i=0;i<leftsize;i++){
            while(j<rightsize&& left[i]>(long long)2*right[j]){
                j++;
            }
            ans+=j;
        }
        int i=0;
         j=0;
        int k=l;
        while(i<leftsize && j<rightsize){
            if(left[i]<right[j]){
                a[k++]=left[i++];
            }
            else{
                a[k++]=right[j++];
            }
        }
        while(i<leftsize){
            a[k++]=left[i++];
        }
        while(j<rightsize){
            a[k++]=right[j++];
        }
    }
    void mergesort(vector<int>&a, int l,int r){
        if(l<r){
            int m=l+(r-l)/2;
            mergesort(a,l,m);
            mergesort(a,m+1,r);
            merge(a,l,m,r);
        }
    }

    int reversePairs(vector<int>& nums) {
        ans=0;
        int n=nums.size();
        if(n==0)return 0;
        mergesort(nums,0,n-1);
        return ans;
    }
};