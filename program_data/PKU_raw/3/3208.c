int main()
{
    int n,k,i;
    cin>>n>>k;
    int a[1000];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {

            if(k==a[i]+a[j])
            {
                cout<<"yes"<<endl;
                return 0;
            }
        }
     }
     cout<<"no"<<endl;
}
