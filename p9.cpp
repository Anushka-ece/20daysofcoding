class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         int row = matrix.size();
        int col = matrix[0].size();
        vector<int> result;

        int rowstart = 0, rowend = row-1;
        int colstart = 0, colend = col-1;
        int direction = 1;

        while(rowstart <= rowend && colstart <= colend)
        {
            // Traverse right
            if ( direction == 1)
            {
                int i = rowstart;
                for (int j = colstart; j <=colend; j++) result.push_back(matrix[i][j]);
                direction = 2;
                rowstart++;
            }
            else if (direction == 2)
            {
                int j = colend;
                for(int i = rowstart; i <= rowend; i++) result.push_back(matrix[i][j]);
                direction = 3;
                colend--;
            }
            else if (direction == 3)
            {
                int i = rowend;
                for (int j = colend; j >= colstart; j--) result.push_back(matrix[i][j]);
                direction = 4;
                rowend--;
            }
            else
            {
                int j = colstart;
                for (int i = rowend;i >= rowstart;i--) 
                    result.push_back(matrix[i][j]);
                direction = 1;
                colstart++;
            }
        }

        return result;
    }
};
