int main()
{
    char a[10000]={' '},b[10000]={' '};
    cin>>a;
    cin>>b;
    int x[1000]={0},y[1000]={0};
    int i;
    int m=0;
    for(i=0;i<strlen(a);i++)
        if(a[i]>='0'&&a[i]<='9')
           x[m]=x[m]*10+(int)a[i]-48;
        else if(a[i]==',') 
        m++;
    m=0;
    for(i=0;i<strlen(b);i++)
        if(b[i]>='0'&&b[i]<='9')
           y[m]=y[m]*10+(int)b[i]-48;
        else if(b[i]==',')
         m++;
    cout<<m+1<<' ';
    int minx=0,maxy=0;
    for(i=0;i<m;i++)
        {
                    if(x[i]<minx)
                      minx=x[i];
                    if(y[i]>maxy)
                      maxy=y[i];
        }
    int max=0;
    for(i=minx;i<=maxy;i++)
    {
                           int n=0;
                           for(int j=0;j<=m;j++)
                              if(i>=x[j]&&i<y[j])
                                n++;
                           if(n>max)
                              max=n;
    }
    cout<<max<<endl;
    
    return 0;
}
    
        
        
