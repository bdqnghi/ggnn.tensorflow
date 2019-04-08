int main()
{
	int a[50],n,i,j,med;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(j=0;j<n/2;j++)
	{
		med=a[j];
		a[j]=a[n-j-1];
		a[n-j-1]=med;
	}
	for(i=0;i<n-1;i++)
		cout<<a[i]<<' ';
	cout<<a[n-1];
	cout<<endl;
	return 0;
}


