
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(!(i%7))continue;
		if((i%10)==7)continue;
		if((i/10)==7)continue;
		sum+=i*i;
	}
	cout<<sum;
	return 0;
}