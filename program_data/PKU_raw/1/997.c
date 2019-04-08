int factors(int n,int min)
{
     int varieties=0,i;
     if(n==1)  return 1;
     else
     {
            for(i=min;i<=n;i++)
            {
                if(n%i==0)
                {
                    varieties+=factors(n/i,i);
                }
            }
        }
        return varieties;
}
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=factors(a[i],2);
    }
    for(i=0;i<n;i++)
    cout<<b[i]<<endl;
    return 0;
}
