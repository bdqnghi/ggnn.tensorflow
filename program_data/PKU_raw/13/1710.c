int main()
{
	int n,a[20000],i,j,b[20000],m=0,k;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	b[0]=a[0];
	for(i=1,j=1;i<n;i++)
	{
		for(k=0;k<j;k++)
			if(a[i]==b[k])
				m=1;
		if(m!=1)
		{
			b[j]=a[i];
			j++;}
		m=0;}
	for(i=0;i<j-1;i++)
		cout<<b[i]<<' ';
	cout<<b[j-1]<<endl;
	return 0;
}
		