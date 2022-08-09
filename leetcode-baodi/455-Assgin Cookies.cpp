// 31 ms 89.19%

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        int j=0;
        int i=0;
        int ans = 0;
        while(j < s.size() && i < g.size())
        {
            if(g[i] > s[j])
            {
                j++;
            }
            else{
                j++;
                i++;
                ans++;
            }
        }
        return ans;
    }
};