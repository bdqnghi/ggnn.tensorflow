/*
La vie est ailleurs
PROB: Missile Defense
LANG: c
ID: 00910049
written by Xu Zhendong
*/


int k;

int main()
{
    int Max( int a, int b );
    int height[100];
    int dp[100];
    char c;
    int i=0, temp=0, n, j, dpmax=0;
    
    scanf("%d",&n);
    n = n-1;
    for (i=0;i<=n;i++)
    {
        scanf("%d",&height[i]);
    }
    /*while ( ( c = getchar() ) != '\n')
    {
          if ( c != ' ' ) temp = temp * 10 + ( c - '0' );
          else 
          {
               height[i++] = temp; 
               temp = 0;
          }
    }
    height[i] = temp;
    n = i ;*/
    
    for ( i = 0; i <= n; i++)
    {
        dp[i] = 1;
        for ( j = 0; j < i; j++)
        {
            if ( height[i] <= height[j] ) dp[i] = Max( dp[j]+1, dp[i]);
        }
    }
    for ( i = 0; i <= n; i++)
    {
        dpmax = Max ( dpmax, dp[i] );
    }
    printf("%d",dpmax);
    return 0;
}
    int Max( int a, int b)
    {
        k = ( a < b ? b : a );
        return (k);
    }
