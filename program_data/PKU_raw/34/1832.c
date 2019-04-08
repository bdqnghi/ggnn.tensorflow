int main()
{
	int n,s,r;
	scanf("%d",&n);
	if(n==1)
	{
		printf("End");
		return 0;
	}
	s=n;
	for(r=1;s!=1;r++)
	{
		if(n%2!=0)
		{
			s=n*3+1;
			printf("%d*3+1=%d\n",n,s);
			n=s;
		}
		else if(n%2==0)
		{
			s=n/2;
			printf("%d/2=%d\n",n,s);
			n=s;
		}
	}
	printf("End");
	return 0;
}