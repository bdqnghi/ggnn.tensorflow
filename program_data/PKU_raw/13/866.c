int main()
{
    int n,i;
    cin>>n;
    if(n==0);
    else
    {int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<a[0];    
    for(i=1;i<n;i++)
    {int k=0,j;
    for(j=0;j<i;j++)
      if(a[i]==a[j])
      k++;
      if(k==0)
      cout<<' '<<a[i];
    } }
    cin.get();cin.get();cin.get();
    return 0; 
}