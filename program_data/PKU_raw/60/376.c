int main()
{
	int n,i;
	scanf("%d",&n);
	if(n==1)
		printf("empty");
	else
		if(n==2||n==3||n==4)
		printf("empty");
		else
		{
	for(i=3;i<=n-2;i++)
	{
		for(int j=2;j<i;j++)
		{
			int c;
			c=i%j;
			if(c==0)
				goto part1;
		}
		for(int j=2;j<i+2;j++)
		{
			int c;
			c=(i+2)%j;
			if(c==0)
				goto part1;
		}
		printf("%d %d\n",i,i+2);
part1:;
	}
		}
	return 0;
}
