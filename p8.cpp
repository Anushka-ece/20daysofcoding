class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
          int n=matrix.size();
        //firstly transposing the matrix
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //now reversing every row
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
