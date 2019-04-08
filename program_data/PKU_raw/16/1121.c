int main()
{
    int p,m,n,a[10];
    cin>>n;
    m=n;
    p=1;
    while(m/10!=0)
    {
        a[p-1]=m%10;
        m=m/10;
        p++;
        }
        a[p-1]=m;
        for(int j=0;j<p;j++)
        cout<<a[j];
        return 0;

    }
