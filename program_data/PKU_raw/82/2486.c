
int main()
{
    int a,b,t=0,m=0,n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
                     cin>>a;
                     cin>>b;
                     if(a>=90&&a<=140&&b>=60&&b<=90)
                     {
                                                    t++;
                                                    if(i==n&&t>=m)
                                                    m=t;
                     }
                     else
                     {
                         if(t>=m)
                         m=t;
                         t=0;
                     }
    }
    cout<<m<<endl;
    

    return 0;
}