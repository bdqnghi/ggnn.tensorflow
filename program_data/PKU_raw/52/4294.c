int main()
{
	int num[100],m,n,i,j,t;
	cin >>n>>m;
	for (i=0;i<n;i++)
	{
		cin >>num[i];
	}
	for(j=0;j<m;j++)
	{
	
		t=num[n-1];

		for (i=n-1;i>0;i--)
	
		{
		
			num[i]=num[i-1];
	
		}
		num[0]=t;
	}
	for(i=0;i<n-1;i++)
	{
		cout <<num[i]<<" ";
	}
	cout <<num[n-1]<<endl;
	return 0;
}


