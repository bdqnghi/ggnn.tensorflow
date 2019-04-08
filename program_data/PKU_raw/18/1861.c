int a[101][101]={0};
int xiao(int n)
{
    int i, j, t, minh[101]={0}, minl[101]={0}, temp=0;
    if(n==2)
    {
        for(i=0; i<n; i++)
    {
        minh[i]=a[i][0];
        for(j=0; j<n; j++)
        {
            if(a[i][j]<minh[i])
                minh[i]=a[i][j];  
        }
        for(t=0; t<n; t++)
        {
            a[i][t]-=minh[i];     
        }     
    }
    for(i=0; i<n; i++)
    {
        minl[i]=a[0][i];
        for(j=0; j<n; j++)
        {
            if(a[j][i]<minl[i])
                minl[i]=a[j][i];  
        }
        for(t=0; t<n; t++)
        {
            a[t][i]-=minl[i];     
        }     
    }
        return a[1][1];    
    }
    if(n>=2)
    {
    for(i=0; i<n; i++)
    {
        minh[i]=a[i][0];
        for(j=0; j<n; j++)
        {
            if(a[i][j]<minh[i])
                minh[i]=a[i][j];  
        }
        for(t=0; t<n; t++)
        {
            a[i][t]-=minh[i];     
        }     
    }
    for(i=0; i<n; i++)
    {
        minl[i]=a[0][i];
        for(j=0; j<n; j++)
        {
            if(a[j][i]<minl[i])
                minl[i]=a[j][i];  
        }
        for(t=0; t<n; t++)
        {
            a[t][i]-=minl[i];     
        }     
    }
    temp=a[1][1];
    for(i=2;i<n;i++)
    {
        a[i-1][0]=a[i][0];
        a[0][i-1]=a[0][i];
        for(j=2;j<n;j++)
        {
            a[i-1][j-1]=a[i][j];            
        }
    }
    return temp+xiao(n-1);
    }
}
int main()
{
    int n, k, l, m, ans[101]={0};
    cin>>n;
    for(m=1;m<=n;m++)
    {
        for(k=0; k<n; k++)
        {
            for(l=0; l<n; l++)
            {
                cin>>a[k][l];     
            }     
        }
        ans[m]=xiao(n);
    }
    for(k=1;k<=n;k++)
    {
        cout<<ans[k]<<endl;             
    }
    int f;cin>>f;
    return 0;
    
} 
