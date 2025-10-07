class Solution {
public:

    #define ll long long int


    long long putMarbles(vector<int>& wt, int k) {

        int n=wt.size();

        vector<int>v;

        for(int i=0;i<n-1;i++)
        {
            v.push_back(wt[i]+wt[i+1]);
        }

        sort(v.begin(),v.end());

        ll mn,mx;
        mx=mn=0;

        n=v.size();
        for(int i=0;i<k-1;i++)
        {
            mx+=v[n-1-i];
            mn+=v[i];
        }

        return mx-mn;
        
    }
};
