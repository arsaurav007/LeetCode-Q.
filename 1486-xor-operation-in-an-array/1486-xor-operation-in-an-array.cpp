class Solution {
public:
    int xorOperation(int n, int start) {

        int val = start;
        
        for(int i = 1; i < n; i++){
            val ^= start + 2 * i;
        }
        
        return val;
    }
};
    