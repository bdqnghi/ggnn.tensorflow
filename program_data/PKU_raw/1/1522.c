int temp=2,sum=0;
void dg(int x)
{
	for(int i=temp; i<=x; i++)
	{
		if(x%i==0)
		{
			temp=i;
			if(x/i==1) 
			{
				sum++;
				temp=2;
			}
			else dg(x/i);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{ 
		cin>>x;
		dg(x);
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}