int main()
{
    int a[5][5],i,j,g[5]={0},sum[5],t[5],k,m=0;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
            cin >> a[i][j];
    }
    for(i=0;i<=4;i++)
    {
        for(j=0,sum[i]=a[i][0],t[i]=0;j<=4;j++)
        {
            if(sum[i]<a[i][j])
            {
                sum[i]=a[i][j];
                t[i]=j;
            }
        }
        for(k=0;k<=4;k++)
        {
            if(sum[i]<a[k][t[i]])
            g[i]++;
        }
        if(g[i]==4)
        {
            m=1;
            cout << i+1 << " "<< t[i]+1 << " " << sum[i] << endl;
        }
     }
     if(m==0)
     cout << "not found";
     return 0;
}
