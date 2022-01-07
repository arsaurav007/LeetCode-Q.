class Solution {
public:
    
    int firstOcc(vector<int>& nums, int key){
        
    int start=0;
    int end= nums.size()-1;
    int ans=-1;

    int mid = start+(end-start)/2;

    while (start<=end)
    {
        if (nums[mid]==key)
        {
            ans= mid;
            end=mid -1;
        }
        else if (key < nums[mid])
        {
           end=mid-1;
        }
        else{
            start=mid+1;
        }

        mid = start+(end-start)/2;
        
        
      }
    return ans;

}

int lastOcc(vector<int>& nums, int key){

    int start=0;
    int end= nums.size()-1;
    int ans=-1;
  

    int mid = start+(end-start)/2;

    while (start<=end)
    {
        if (nums[mid]==key)
        {
            ans= mid;
            start=mid +1;
        }
        else if (key < nums[mid])
        {
           end=mid-1;
        }
        else{
            start=mid+1;
        }

        mid = start+(end-start)/2;
        
        
      }
    return ans;

}
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> v;
        v.push_back(firstOcc(nums, target));
        v.push_back(lastOcc(nums, target));
        
        return v;
    }
};