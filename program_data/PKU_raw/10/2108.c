const int maxn = 55; 
int a[maxn], dp[maxn][maxn]; 

int main()
{
    int T, n, i, j, ans; 
    while (scanf ("%d", &n)!=EOF)
    {
          for (i=1; i<=n; i++)scanf ("%d", a+i); 
          memset (dp, -1, sizeof(dp)); 
          for (i=1; i<=n; i++) dp[i][i] = 1; 
          for (i=1; i<n; i++)
          {
              for (j=1; j<=i;j++)
              {
                  dp[i+1][j] = max(dp[i+1][j], dp[i][j]); 
                  if (a[i+1]<=a[j])
                     dp[i+1][i+1] = max(dp[i+1][i+1], dp[i][j]+1);     
              }    
          }
          ans = 0; 
          for (i=n, j=1;j<=i;j++) ans = max(ans, dp[i][j]); 
          printf ("%d\n", ans); 
    }
    return 0; 
}
