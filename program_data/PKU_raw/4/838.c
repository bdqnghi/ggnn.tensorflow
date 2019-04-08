
int main()
{
    int a[101][101],*p;
    int m,n;
    cin>>m>>n;
    for (p=*a;p<*a+m*n;p++) cin>>*p;
    p=*a;
    for (int i=0;i<n;i++)
    {
        int a=0,b=i;
        while ((a<m)&&(b>=0))
        {
              cout<<*(p+a*n+b)<<endl;
              a++;
              b--;
        }
    }
    for (int i=1;i<m;i++)
    {
        int a=i,b=n-1;
        while ((a<m)&&(b>=0))
        {
              cout<<*(p+a*n+b)<<endl;
              a++;
              b--;
        }
    }
    
    return 0;
}
