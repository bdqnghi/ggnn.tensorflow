int main()
{
	int a[10000]={0};
	int n,i,j;
	cin>>n;
	while(cin>>i>>j&&(i!=0||j!=0))
	{
		a[i]=0;
		a[j]++;
	}
	for(i=0;i<=n-1;++i)
		if(a[i]==n-1)
			cout<<i;
	return 0;
	
}
