
int main()
{
	int m,n,i,a[2000];
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=n+1;i<=2*n;i++)
		a[i]=a[i-n];
	int *p=&a[1];
	cout<<a[n-m+1];for(i=1;i<=n-1;i++)
	{*(p+i)=*(p+n-m+i);cout<<" "<<*(p+i);}cout<<endl;

	

	return 0;
}
