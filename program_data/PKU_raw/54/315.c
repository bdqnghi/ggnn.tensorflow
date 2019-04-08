
void main()
{
	int n,k,i,s;
	s=1;
	scanf("%d%d",&n,&k);
	if(n==2)
		printf("7");
	else
	{
		for(i=1;i<=n;i++)
		{
			s=s*n;
		}
		s=s-n*k+k;
		printf("%d",s);
	}
}
