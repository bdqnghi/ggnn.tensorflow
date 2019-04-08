
int function(int n,int a)
{
	int kind=0;
	int i;
	if(n==1)
	return 1;
	for(i=a;i<=n;i++)
	{
		if(n%i==0)
		{
			if(n/i<i&&i!=n);
			else
			{
				kind=kind+function(n/i,i);
			}
		}
	}
	return kind;
}

int main()
{
	int m,n,i,sum;
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>n;
		sum=function(n,2);
		cout<<sum<<endl;
	}
	return 0;
}