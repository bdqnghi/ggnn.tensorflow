
int main()
{
    int n, N, a[120], b[120], c[120];
    char a1[120], b1[120], hh;
    
    cin >> N;
    cin.get(hh);
    
    for(n = 0; n < N; n++)
    {
        int i, l, j;
        
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        
        cin.getline(a1, 120);
        l = strlen(a1);
        for(i = 0; i < l; i++)
        {
            a[i] = a1[l - 1 - i] - '0';
        }
        
        cin.getline(b1, 120);
        l = strlen(b1);
        for(i = 0; i < l; i++)
        {
            b[i] = b1[l - 1 - i] - '0';
        }
        
        l = strlen(a1);
        for(i = 0; i < l; i++)
        {
            if(a[i] - b[i] >= 0) c[i] = a[i] - b[i];
            else
            {
                c[i] = a[i] - b[i] + 10;
                j = i + 1;
                while(a[j] == 0)
                {
                    a[j] = 9;
                    j++;
                }
                a[j] = a[j] - 1;
            }
        }
        
        for(i = l - 1; i >= 0; i--) cout << c[i];
        
        cout << endl;
        
        cin.get(hh);
    }

    return 0;
}
