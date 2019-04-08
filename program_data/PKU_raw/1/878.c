int prime(int min,int num)
{
	int i;
	for(i=min;i<num;i++)
	{
		if(num%i==0)
			return 0;
	}
 return 1;
}
int count(int min,int num)
{
	int i=0,n=1;
	if(prime(min,num))
		return 1;
	else
		for(i=min;i<num;i++)
		{
			if(num%i==0&&i<=num/i)
			{
				n=n+count(i,num/i);	
			}
		}
	return n;
}
int main()
{
	int num,n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		cout<<count(2,num)<<endl;
	}
	return 0;
	
}
