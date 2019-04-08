int main()
{
	int a[100000],n,k,m,i,j;
	cin >>n;
	for(i=0;i<n;i++)
	{
		cin >>a[i];
	}
	cin >>k;
	m=0;
	i=0;
	j=0;
	while(j<n)
	{
		
		if(a[j]!=k)
		{
			a[i]=a[j];
			i=i+1;
		}
		j=j+1;
	}


	for(j=0;j<i;j++)
	{
		if(j==0)
			cout<<a[j];
		else
			cout<<' '<<a[j];
	}
	return 0;
}
