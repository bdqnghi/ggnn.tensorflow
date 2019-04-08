int main()
{
	int number[1001],num[27]={0},ascii[27];
	char a[1001][27],p;
	int i,j,m,n,t1,t;
	cin>>m;
	n=26;
	for(i=0;i<m;i++)
	{
		cin>>number[i];
		cin>>a[i];
		for(j=0;j<strlen(a[i]);j++)
		{
			num[a[i][j]-'A']++;
		}
	}
	for(i=0;i<n;i++)
	{
		ascii[i]=i;
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>0;j--)
		{
			if(num[j]>num[j-1])
			{
				t=num[j];
				num[j]=num[j-1];
				num[j-1]=t;
				t1=ascii[j];
				ascii[j]=ascii[j-1];
				ascii[j-1]=t1;
			}
		}
	}
	p='A'+ascii[0];
	cout<<p<<endl;
	cout<<num[0]<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<strlen(a[i]);j++)
		{
			if(a[i][j]==p)
			{
				cout<<number[i]<<endl;
				break;
			}
		}
	}
	return 0;
}
