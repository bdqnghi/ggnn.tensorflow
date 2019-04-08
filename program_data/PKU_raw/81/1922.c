

int a[6][6];
int n,m;

int main()
{
    for(int i=0;i<5;i++)
    {
            for(int j=0;j<5;j++)
            {
                    cin>>a[j][i];
            }
    }
    cin>>n>>m;
    int k=0;
    if(n>=0 && n<=4)
    {
            if(m>=0 && m<=4)
            k=1;
    }
    if(k)
    {
         for(int i=0;i<5;i++)
         {
                 int u;
                 if(i==n)
                 u=m;
                 else if(i==m)
                 u=n;
                 else
                 u=i;
                 for(int j=0;j<5;j++)
                 {
                                 if(j!=4)
                                 cout<<a[j][u]<<' ';
                                 else
                                 cout<<a[j][u]<<endl;
                 }
         }
    }
    else
    {
        cout<<"error"<<endl;
    }
    return 0;
}
