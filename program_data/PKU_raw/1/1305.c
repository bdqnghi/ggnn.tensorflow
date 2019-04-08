int sum=0;
void divide(int n,int a)
{
	for(int i=a;i<=n;i++)
	{
		if((n%i==0))
		{
			if(n/i==1)
				sum++;
			else
				divide(n/i,i);
		}
	}
}
int main()
{
	int N=0,n=0,i=0;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>n;
		divide(n,2);
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}