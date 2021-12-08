class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int maxi=candies[0];
        for(int i=1;i<candies.size();i++)
        {
            maxi=max(maxi, candies[i]);
           // if(candies[i]>max)
             //   max=candies[i];
        }
        vector<bool>v;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=maxi)
                v.push_back(true);
            else
                v.push_back(false);
        }
        return v;
    }
};