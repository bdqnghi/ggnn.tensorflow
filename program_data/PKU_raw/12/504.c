

int main()
{
    int a[20],i,j,n,court;
    while (1)
    {
        for (i = 0; 1 ; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                break;
        }
        if ( a[0] == -1 )
            break;
        n = i;
        for (i = 0, court = 0 ; i <= n; i++)
        {
            for (j = i; j <= n - 1; j++)
            {
                if (a[j] == 2 * a[i] || a[i] == 2 * a[j])
                    court++;
            }
        }
        cout << court << endl;
    }
    return 0;
}