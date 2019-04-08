int main()
{
    int a[5][5],k,m=0,n,i,j;
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    cin>>a[i][j];
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
    {
        n=0;
        for(k=0;k<5;k++)
        {
            if(a[k][j]>=a[i][j]&&a[i][k]<=a[i][j])
                 n=n+1;
                       }
        if(n==5) cout<<i+1<<" "<<j+1<<" "<<a[i][j];
       else m=m+1;
    }
    }
        if(m==25) cout<<"not found";
        return 0;
        }