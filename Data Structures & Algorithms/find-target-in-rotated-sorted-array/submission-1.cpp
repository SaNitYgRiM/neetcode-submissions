class Solution {
public:
int bsearch(vector<int>& nums,int l,int h,int target){
    int mid;
    while(l<=h){
        mid=l+(h-l)/2;
        if(target==nums[mid])return mid;
        if(target<nums[mid])h=mid-1;
        else l=mid+1;
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=n-1;
        int mid;

        while(l<h){
             mid=l+(h-l)/2;
            if(nums[mid]<nums[h])h=mid;
            else if(nums[mid]>nums[h])l=mid+1;
           
        }
        //cout<<l;
        int res=bsearch(nums,0,l-1,target);
        return res==-1?bsearch(nums,l,n-1,target):res;
        
    }
};
