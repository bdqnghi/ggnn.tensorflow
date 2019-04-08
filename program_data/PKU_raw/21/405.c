int main()
{
    int n=0,i=0,j=0,k=1;
    double pj=0.0,zh=0.0,max=0.0;
    int a[1000]={0};
    double b[1000]={0.0};
    cin>>n;
    for (i=0;i<n;i++)
        cin>>a[i];
    for (i=0;i<n;i++)
        zh=zh+a[i];
    pj=zh/n;
    for (i=0;i<n;i++)
    {
        if (a[i]>pj)
            b[i]=a[i]-pj;
        else
            b[i]=pj-a[i];
    }
    for (i=0;i<n;i++)
    {
        if (max<b[i])
            max=b[i];
    }
    for (i=0;i<n;i++)
    {
        if (max==b[i]&&i!=n-1)
        {
            for (j=1;j<n-i;j++)
            {        
                if (max!=b[i+j])
                    k=k*1;
                if (max==b[i+j])
                    k=0;
            }
            if (k==0)
                cout<<a[i]<<",";
            if (k==1)
                cout<<a[i]<<endl;
        }
        if (max==b[i]&&i==n-1)
            cout<<a[i]<<endl;
    }
    return 0;
}
    