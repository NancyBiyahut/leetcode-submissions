class Solution {
public:
    int search(vector<int>& nums, int key ) {
       // int h = nums.size();
        int L = nums.size();
        int mid =0;
        for(int i=0;i<L-1;i++){
            if(nums[i]>nums[i+1]){
                mid = i+1;
                break;
            }
        }
        int f1 = bin(nums,0,mid-1,key);
        int f2 = bin(nums,mid,L-1,key);
        if(f1==-1) return f2;
        return f1;
    }
    int bin(vector<int>nums ,int start,int last,int t){
        int f = -1;
        while(start<=last){
            int mid = (start+last)/2;
            if(nums[mid]==t) return mid;
            else if(nums[mid]>t){
                last = mid -1;
            }else{
                start = mid+1;
            }
        }
        return f;
    }
};