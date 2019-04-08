int main()
{
    int n,m,temp;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            temp=a[n-1];
            a[n-1]=a[j];
            a[j]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
            cout<<a[i];
            if(i!=n-1)
            cout<<" ";
    }
}
