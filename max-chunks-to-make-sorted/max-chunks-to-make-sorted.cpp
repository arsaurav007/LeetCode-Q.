class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ma=0,c=0,i=0;
for(auto it:arr)
{
ma=max(ma,it);
if(ma==i)
c++;
i++;
}
return c;
}
};
        
