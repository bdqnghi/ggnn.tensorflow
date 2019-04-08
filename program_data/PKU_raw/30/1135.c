int main()
{
	int i,n;
	int s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
		{
			s=s;
		}
		else if(i%10==7)
		{
			s=s;
		}
		else if((i-i%10)/10==7)
		{
			s=s;
		}
		else
			s=s+i*i;
	}
	printf("%d",s);
	return 0;
}