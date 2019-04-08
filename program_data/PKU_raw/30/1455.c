int main()
{
	int n;
	cin>>n;
	int i=1,sum=0;
while(i<=n)
{
	if(i%7==0)
	{
	i++;
	}
	else
	{
		if(i%10==7)
		{
		     i++;
		}
		else
		{
			if(i-70>0&i-70<10)
			{
			    i++;
			}
			else
			{
				sum=sum+i*i;
				i++;
			}
		}
	}
}
cout<<sum<<endl;
return 0;
}