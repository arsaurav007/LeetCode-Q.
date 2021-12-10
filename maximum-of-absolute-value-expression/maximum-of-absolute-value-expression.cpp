class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v1,v2,v3,v4;
        for(int i =0; i<arr1.size(); i++){
            
            v1.push_back(arr1[i]+arr2[i]+i);
            v2.push_back(arr1[i]-arr2[i]+i);
            v3.push_back(i-arr1[i]+arr2[i]);
            v4.push_back(i-arr1[i]-arr2[i]);
 }
       
        int ans=0;
        ans=max(ans, maxArray(v1)-minArray(v1));
        ans=max(ans, maxArray(v2)-minArray(v2));
        ans=max(ans, maxArray(v3)-minArray(v3));
        ans=max(ans, maxArray(v4)-minArray(v4));
        return ans;
    }
        
         int maxArray(vector<int>& arr){
            int max=INT_MIN;
            
            for(int i=0;i<arr.size();i++){
                if(arr[i]>max){
                    max=arr[i];
                }
            }
            return max;
        }
          int minArray(vector<int>& arr){
            int min=INT_MAX;
            
            for(int i=0;i<arr.size();i++){
                if(arr[i]<min){
                    min=arr[i];
                }
            }
            return min;
          
    }
};