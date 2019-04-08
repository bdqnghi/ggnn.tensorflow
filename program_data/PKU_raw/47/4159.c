int main()
{
	int i,n,x,a[100];
	cin >>n;
	for(i=1;i<=n;i++)
		cin >>a[i];
	for(i=1;i<=n/2;i++)
	{
		x=a[i];
		a[i]=a[n-i+1];
		a[n-i+1]=x;
	}
	for(i=1;i<=n-1;i++)
		cout <<a[i]<<" ";
	cout <<a[n];
	return 0;
}
