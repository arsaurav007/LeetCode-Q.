// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
int x = rand7(), y = rand7();
int val = (x - 1) * 7 + y;
if(val > 40) return rand10();
return 1 + val % 10;
        
    }
};