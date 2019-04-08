int main()
{
	int a[300];
	int n,m,i,j;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	j=0;
	for(i=n;i<2*n-m;i++)
	{
	  	a[i]=a[j];
     	j++;
	}
	for(i=n-m;i<2*n-m-1;i++)
		cout<<a[i]<<' ';
	cout<<a[2*n-m-1];
	return 0;
}
