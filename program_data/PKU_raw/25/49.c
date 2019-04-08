/*
  *@ title:??2?N??
  *@ date:2010-12-15
  *@ author:1000012899 ???
  *@ description: ?????
*/
int main()
{
    int n, i, j;
    unsigned s;
    int sum[40] = {8, 4, 6, 3, 8, 4, 7, 4, 1, 2};
    cin >> n;
    if (n <= 31) 
    {
        s = 1;
        for (i = 1; i <= n; i++) s = s * 2;
        cout << s;
    }
    else
    {
        for (i = 1; i <= n - 31; i++)
        {
            for (j = 0; j < 39; j++) sum[j] = sum[j] * 2;
            for (j = 0; j <= 39; j++)
            {
                sum[j+1] = sum[j] / 10 + sum[j+1];
                sum[j] = sum[j] % 10;                    
            }
        }
        i = 39;
        while(sum[i] == 0) { i--;}
        for (j = i; j >= 0; j--) cout << sum[j];
    }
    return 0;
}
    
                
              




   