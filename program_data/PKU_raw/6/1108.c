int main()
{
	int t;
	cin>>t;
	int a[100][100];
	int sum;
	int n[200];
	int g;
	int s[200];
	for(g=0;g<=t-1;g++)
	{
	cin>>s[g];
		cin>>n[g];

	int i;
	int j;
	for(i=0;i<=s[g]-1;i++)
		for(j=0;j<=n[g]-1;j++)
		{
			cin>>a[i][j];
		}

	sum=0;
	for(i=0;i<=s[g]-1;i++)
	{
		sum=sum+**(a+i);
		sum=sum+*(*(a+i)+n[g]-1);
	}
	for(j=0;j<=n[g]-1;j++)
	{
		sum=sum+*(*a+j);
		sum=sum+*(*(a+s[g]-1)+j);
	}
	sum=sum-**a-*(*(a+s[g]-1)+n[g]-1)-*(*a+n[g]-1)-**(a+s[g]-1);
	cout<<sum<<endl;
	}
	return 0;

}