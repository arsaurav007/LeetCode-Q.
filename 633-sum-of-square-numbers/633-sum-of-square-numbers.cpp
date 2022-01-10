class Solution {
public:
    bool judgeSquareSum(int c) {
         long long a=0,b=sqrt(c);
        while(a<=b){
        if(a*a+b*b>c) 
          b--;
        else if(a*a+b*b<c) 
          a++;
        else 
          return true;
    }
    return false;
        
    }
};