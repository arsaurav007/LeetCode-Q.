class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector <int> nums;
        int output = 0;
        for(int i = 0; i < n; i++){
            int val = start + 2 * i;
            nums.push_back(val);
            output = output ^ nums[i];
        }
        return output;
        
    }
};