class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
     
        
        for(int i=0; i<nums.size();++i){
            
            bool flag=true;
            for(int j=0; j<nums.size(); j++){
                if(nums[i]==nums[j] && i != j){
                    flag =false;
                }
                
            }
            if(flag==true){
                sum= sum+nums[i];
            }
            
            
        }
        
        return sum;
            
    } 
    
};