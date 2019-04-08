int num=1,k=0;
int count(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0&&i>=k)
		{
			num++;
			k=i;
			count(n/i);
			k=0;
		}
	}
	return (num);
}
int main()
{
	int i,n,a[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{cout<<count(a[i])<<endl;num=1;k=0;}
	return 0;
}