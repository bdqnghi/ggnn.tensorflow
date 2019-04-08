int main()
{
	int n,i,j,k,l=0;//????n?????ij?????k????k???l
	int a[100001];
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];//??
	cin>>k;
	for(i=1;i<=n-l;i++)
		if(a[i]==k)
		{
			l++;
			for(j=i;j<=n-l;j++)
				a[j]=a[j+1];//??k???
			i--;
		}
	for(i=1;i<=n-l-1;i++)
		cout<<a[i]<<' ';
	cout<<a[n-l];//??
	return 0;
}