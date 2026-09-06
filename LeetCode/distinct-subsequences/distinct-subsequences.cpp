    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(s[i]==t[j]){
        int take = solve(s,t,i+1,j+1,dp);
        int notTake = solve(s,t,i+1,j,dp);
        return dp[i][j]=take+notTake;
    }
    else {
        return dp[i][j]=solve(s,t,i+1,j,dp);
    }
}
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(s,t,0,0,dp);
    }
};
