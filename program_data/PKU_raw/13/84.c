int main()
{
	int n,i,j;
	cin>>n;
	int num[20000];
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	cout<<num[0];
	for(i=1;i<n;i++)
	{
		int sum=0;
		for(j=0;j<i;j++)
		{
			if(num[i]!=num[j])
			{
				continue;
			}
			else sum++;
		}
		if(sum==0) cout<<' '<<num[i];
	}
	return 0;
}