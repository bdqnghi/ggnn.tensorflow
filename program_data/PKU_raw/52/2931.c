int main()
{
	int n,t,m,a[200],i,j,k;
	cin>>n>>m;
	for (i=0;i<n;i++)
		cin>>a[i];
	while (m>0)
	{
		t=a[n-1];
		for (j=n-1;j>0;j--)
			a[j]=a[j-1];
		a[0]=t;m--;
	}
	cout<<a[0];
	for (k=1;k<n;k++)
		cout<<" "<<a[k];
	return 0;
}
