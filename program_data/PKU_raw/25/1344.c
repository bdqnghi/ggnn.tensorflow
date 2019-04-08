
int main()
{
    int n, sum[100000], i, j, l = 1, m;
    
    memset(sum, 0, sizeof(sum));
    
    sum[0] = 2;
    
    cin >> n;
    
    if(n == 0) cout << 1 << endl;
    else
    {
        for(i = 1; i < n; i++)
        {
            for(j = 0; j < l; j++)
            {
                sum[j] = sum[j] * 2;
            }
        
            for(j = 0; j < l; j++)
            {
                if(sum[j] > 9)
                {
                    sum[j] = sum[j] % 10;
                    sum[j + 1]++;
                }
            }
            l++;
        }
        
        for(i = l; sum[i] == 0; i--)
        {
            m = i;
        }
        
        for(i = m - 1; i >= 0; i--)
        {
            cout << sum[i];
        }
        cout << endl;
    }

    return 0;
}
