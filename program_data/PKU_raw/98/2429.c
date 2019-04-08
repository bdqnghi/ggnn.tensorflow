int main()
{
	char a[1000][42];
	int n,len[1000],sum=0;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		len[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(sum+len[i]<=80)
		{
			cout<<a[i];
			sum+=len[i];
			if(sum+1+len[i+1]<=80)
			{
				if(i!=n-1)
				{
				cout<<' ';
				sum++;
				}
			}
			else
			{
				cout<<endl;
				sum=0;
			}
		}
	}
	cout<<endl;
		return 0;
}