int main()
{
    int n,i;
    cin >> n;
    int x[n+1];
    x[0]=0;
    for (i=1;i<=n;i++)
    {
        int a;
        cin >> a;
        x[i]=a;
    }
    int j;
    for (j=n;j>1;j--)
    {
        int k;
        for (k=1;k<j;k++)
        {
            if (x[k]==x[j])
            {
                           x[j]=0;
            }
        }
    }
    cout << x[1];
    for (i=2;i<=n;i++)
    {
        if (x[i]!=0)
        {
                    cout << " " << x[i];
        }
    }
    cout << endl;
    
    return 0;
}
