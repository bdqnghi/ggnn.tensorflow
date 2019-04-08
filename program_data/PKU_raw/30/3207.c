int main()
{
	int n,i,s;
	scanf("%d",&n);
	i=1;
	s=0;
	do
	{
		if(i%7==0)
		{
			i++;
		}
		else if((i%10==7)||((70<=i)&&(i<=79)))
		{
			i++;
		}
		else
		{
			s=s+(i*i);
			i++;
		}
	}
	while(i<=n);
	printf("%d",s);
	return 0;
}