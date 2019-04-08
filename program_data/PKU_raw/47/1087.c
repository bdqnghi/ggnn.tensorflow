int main()
{
    int n=0,t=0,i=0,j=0,k=0;
    int num[100];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>num[i];
    }
    for(k=1;k<=n;k++)
       for(j=1;j<=n-k;j++)
        {
            t=num[j];num[j]=num[j+1];num[j+1]=t;
        }
    for(i=1;i<n;i++)
    cout<<num[i]<<" ";
    cout<<num[n]<<endl;
    return 0;
}
