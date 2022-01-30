class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int start=0;
        int end=n-1;
        int c;
        while(start<=end)
        {
            if(abs(nums[start])<abs(nums[end]))
            {
                c=nums[end]*nums[end];
                end--;
            }
            else 
            {

                c=nums[start]*nums[start];
                start++;
            }
            ans.push_back(c);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
//IT HAS O(N) COMPLEXITY
