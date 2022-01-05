#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int maxprofit(vector<int>prices,int n)
{
    int buy=0;
    int sell=1;
    int max_profit=0;
    while(buy<n-1 && sell<n)
    {
        if(prices[sell]<prices[buy])
        {
            buy=sell;
            sell++;
        }
        else
        {
            max_profit=max(max_profit,prices[sell]-prices[buy]);
            sell++;
        }
    }
    return max_profit;
}

int main()
{int n;
cin>>n;
    vector<int>v;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    cout<<maxprofit(v,n);
    return 0;
}