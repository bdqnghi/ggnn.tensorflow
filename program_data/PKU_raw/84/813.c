int main()
{
    int n,t;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    cin>>a[i];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    cout<<a[1]<<endl<<a[2]<<endl;
    return 0;
}