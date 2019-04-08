//??????
int main()
{
    int n=0,i=0,j=0;
    int a[10000]={0};
    int *p=a;
    cin>>n;
    for (i=0;i<n;i++)
        cin>>a[i];
    for (i=0;i<n/2;i++)
    {
        j=*(p+i);
        *(p+i)=*(p+n-1-i);
        *(p+n-1-i)=j;
    }
    for (i=0;i<n;i++)
    {
        if (i!=n-1)
            cout<<a[i]<<" ";
        if (i==n-1)
            cout<<a[i];
    }
    return 0;
} 
