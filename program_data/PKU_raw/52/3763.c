int main()
{
	int i,n,m,num[100]={0};
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>num[i];
	int temp=0;
	while(m--)
	{
		temp=num[n-1];
		for(i=n-1;i>=0;i--)
			num[i+1]=num[i];
		num[0]=temp;
	}
	cout<<num[0];
	for(i=1;i<n;i++)
		cout<<' '<<num[i];
	return 0;
}

