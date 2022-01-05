#include<iostream>
#include<climits>
#include<vector>
#include<cmath>

using namespace std;


int max_water_trapped(vector<int>height,int n)
{
if(n<=2)//not possible if less than 2 blocks are present
return 0;
int max_left=height[0];
int max_right=height[n-1];
int trappedwater=0;
int left=1;//start from second bar
int right=n-2;//end at second last bar
while(left<=right)
{
    if(max_left<max_right)
    {
        if(height[left]>max_left)
        {
            max_left=height[left];
        }
        else
        {
            trappedwater+=max_left-height[left];
        }
        left++;
    }
    else
    {
        if(height[right]>max_right)
        {
            max_right=height[right];
        }
        else
        {
            trappedwater+=max_right-height[right];
        }
        right--;
    }
    
}
return trappedwater;
}

int main()
{
    int n;
    cin>>n;
    vector<int>height;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        height.push_back(temp);
    }
    cout<<max_water_trapped(height,n);
    return 0;
}