int p=0,q=1;
int main()
{
    char a[110][110];
    int i,j,n,m,c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
                     cin>>a[i];
    }
    cin>>m;
    for(i=1;i<=n;i++)
    {
                     for(j=0;j<=n-1;j++)
                     {
                                      if(a[i][j]=='@')
                                      p++;
                     }
    }      
    int f(int m,int n,char a[][110]);
    c=f(m,n,a);
    cout<<c;
    return 0;
}
int f(int m,int n,char a[][110])
{
    int i,j;
    if(q==m) 
    return p;
    else
    {
    int b[110][110]={0};
    for(i=1;i<=n;i++)
    {
                     for(j=0;j<=n-1;j++)
                     {
                                        if((a[i][j]=='@')&&(b[i][j]==0))
                                        {
                                             if(a[i][j+1]=='.')
                                             {
                                                p++;
                                                a[i][j+1]='@';
                                                b[i][j+1]=1;
                                             }
                                             if(a[i][j-1]=='.')
                                             {
                                                           p++;
                                                           a[i][j-1]='@';
                                                           b[i][j-1]=1;
                                             }     
                                             if(a[i+1][j]=='.')
                                             {
                                                           p++;
                                                           a[i+1][j]='@';
                                                           b[i+1][j]=1;
                                             }
                                             if(a[i-1][j]=='.')
                                             {
                                                           p++;
                                                           a[i-1][j]='@';
                                                           b[i-1][j]=1;
                                             }
                                        }
                     }
    }
                                             q++;
                                             return f(m,n,a);
    } 
} 