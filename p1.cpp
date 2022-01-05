#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int maxsum(vector<int>v,int n)
{
    int sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum>max_sum)
        max_sum=sum;
        if(sum<0)
        sum=0;
    }
    return max_sum;
}
int main()
{
vector<int>v;
int n;
cin>>n;
int temp;
for(int i=0;i<n;i++)
{
    cin>>temp;
    v.push_back(temp);
}
cout<<maxsum(v,n);
return 0;
}