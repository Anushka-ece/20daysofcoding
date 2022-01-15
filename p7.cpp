class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;//two dimensional vector array for storing answer values
        if(intervals.size()==0)//base condition
            return ans;
        sort(intervals.begin(),intervals.end());//sort the subintervals firstly
        ans.push_back(intervals[0]);//push first subarray in the resultant ans array
        int j=0;
        for(int i=1;i<intervals.size();i++)
        {
          if(ans[j][1]>intervals[i][0])//case of overlappping intervals
              ans[j][1]=max(ans[j][1],intervals[i][1]);
            else
            {
                j++;
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};
