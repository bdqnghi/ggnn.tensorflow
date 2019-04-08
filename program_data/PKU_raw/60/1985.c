
main()
{
	int f(int n);
	int N,i,t=0;
	scanf("%d",&N);
	for(i=2;i<=N-2;i++)
	{
		if(f(i)==1&&f(i+2)==1)
		{
			printf("%d %d\n",i,i+2);
			t=1;
		}
	}
	if(t==0)
		printf("empty\n");
}

int f(int n)
{
	int i,m;
	m=(int)sqrt(n);;
	int t=1;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
			t=0;
	}
	return t;
}