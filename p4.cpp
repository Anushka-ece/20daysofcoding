 #include<iostream>
 #include<vector>
#include<climits>

using namespace std;

 int candy(vector<int>& ratings) {
        int l=ratings.size();
        vector<int>l2r(l,1);
        vector<int>r2l(l,1);
        int ans=0;
        for(int i=1;i<l;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                l2r[i]=l2r[i-1]+1;//greedy approach
            }
                
        }
        for(int i=l-2;i>=0;i--)
        {
             if(ratings[i]>ratings[i+1])
            {
            r2l[i]=r2l[i+1]+1;//greedy approach
            }
        }
        for(int i=0;i<l;i++)
        {
            ans+=max(l2r[i],r2l[i]);
        }
        return ans;
    }
    int main()
    {
        int l,temp;
        cin>>l;
        vector<int>r;
        for(int i=0;i<l;i++)
        {
            cin>>temp;
            r.push_back(temp);
        }
        cout<<candy(r);
        return 0;
    }