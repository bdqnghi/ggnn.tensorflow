
int main()
{
    int array[100][100], n, m, i1, i2, j1, j2, s1, s2, t, h, num = 0, k;
    
    cin >> n >> m;
    
    k = n * m;
    
    if(n % 2 == 0) h = n / 2;
    else h = n / 2 + 1;
    
    for(i1 = 0; i1 < n; i1++)
    for(j1 = 0; j1 < m; j1++)
    cin >> array[i1][j1];
    
    for(i1 = 0; i1 < h; i1++)
    {
        for(j1 = i1; j1 < m - i1; j1++)
        {
            if(num >= k) break;
            
            cout << array[i1][j1] << endl;

            s1 = j1;
            
            num++;
        }
        
        for(i2 = i1 + 1; i2 < n - i1; i2++)
        {
            if(num >= k ) break;
            
            cout << array[i2][s1] << endl;
            
            t = i2;
            
            num++;
        }
        
        for(j2 = s1 - 1; j2 >= i1; j2--)
        {
            if(num >= k) break;
            
            cout << array[t][j2] << endl;
            
            s2 = j2;
            
            num++;
        }
        
        for(i2 = t - 1; i2 >= i1 + 1; i2--)
        {
            if(num >= k) break;
            
            cout << array[i2][s2] << endl;
            
            num++;
        }
    }

    return 0;
}
