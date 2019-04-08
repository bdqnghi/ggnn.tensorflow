int main()
{
	int n,i,j,k,t;
	int a[101];
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	if(n%2==0)
	{
		k=n/2;
        for(i=1;i<=k;i++)
		{
			t=a[n+1-i];
			a[n+1-i]=a[i];
			a[i]=t;
		}
	}
	else if(n%2!=0)
	{
		k=(n-1)/2;
        for(i=1;i<=k;i++)
		{
			t=a[n+1-i];
			a[n+1-i]=a[i];
			a[i]=t;
		}
	}
	for(i=1;i<=n-1;i++)
		cout<<a[i]<<" ";
	    cout<<a[n];
   
return 0;
}