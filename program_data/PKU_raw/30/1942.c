int main()
{
	int n,i,s;
	s = 0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
		{
			s = s;
		}
		else if(i%10==7)
		{
			s = s;
		}
		else if(i/10==7)
		{
			s = s;
		}
		else
		{
			s+=i*i;
		}
	}
	printf("%d",s);
	return 0;
}
