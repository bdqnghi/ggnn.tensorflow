int main()
{
	int a[40],i,k,j=0,n,m,temp;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=n-m;i<=n-1;i++)
	{
		for(k=i;k>j;k--)
		{	
			temp=a[k];a[k]=a[k-1];a[k-1]=temp; 
		}
		j+=1;
	}
	cout<<a[0];
	for(i=1;i<n;i++)
		cout<<' '<<a[i];
		return 0;
}
