
int a[111][111];
int n; 

int xiao(int size);

int sum()
{
    int temp=0;
    for(int siz=n;siz>=2;siz--)
    {
        temp+=xiao(siz);
    }
    return temp;
}

int xiao(int size)
{
    for(int i=1;i<=size;i++)
    {
        int tempmin=100000;
        for(int j=1;j<=size;j++)
            if(a[i][j]<tempmin)
            tempmin=a[i][j];
        for(int j=1;j<=size;j++)
            a[i][j]-=tempmin;
    }
    for(int i=1;i<=size;i++)
    {
        int tempmin=100000;
        for(int j=1;j<=size;j++)
            if(a[j][i]<tempmin)
            tempmin=a[j][i];
        for(int j=1;j<=size;j++)
            a[j][i]-=tempmin;
    }

    int daan=a[2][2];
    
    for(int i=1;i<=n;i++)
        for(int j=2;j<n;j++)
            a[i][j]=a[i][j+1];
    for(int i=1;i<n;i++)
        for(int j=2;j<n;j++)
            a[j][i]=a[j+1][i];
   return daan;

}

int main()
{
    cin>>n;
    for(int t=1;t<=n;t++)
    {
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>a[i][j];
        cout<<sum()<<endl;        
    }
    
    
    
    return 0;
}
