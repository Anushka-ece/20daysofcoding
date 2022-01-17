class Solution {
public:
    int minDistance(string word1, string word2) {
         //Tabulation approach is followed here
        int m=word1.size();//length of first string i.e word1
        int n=word2.size();//length of second string i.e word2
        
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        
      
        for(int i=0;i<=m;i++) //each row represents number of characters in word1
            dp[i][0]=i;//base condition when we are assuming that word2 is empty string
        for(int i=0;i<=n;i++) //each col represents number of characters in word2
            dp[0][i]=i;//base condition when we are assuming that word1 is empty string
        
        //now running loop for MAIN operations
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(word1[i-1] == word2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                
                else 
                    dp[i][j] = 1+min( {dp[i-1][j],/*here we are taking minimum of insert,delete and replace operation*/
                                   dp[i-1][j-1],
                                   dp[i][j-1]});
            }
        }
        
        return dp[m][n];
    }
};
