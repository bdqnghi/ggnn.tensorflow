int main()
{
    int i,j=1,n;
    int a[100],s=0,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
                     while(i%10==7||i/10==7||i%7==0)
                     {
                             a[j]=i;
                             j++;
                             break;
                                                 }
                     }
    for(i=1;i<=n;i++)
    s=s+i*i;
    for(i=1;i<=j-1;i++)
    k=k+a[i]*a[i];
    cout<<s-k<<endl;
    return 0;
}
