int count;
void f(int x,int y)
{
	int i=0;
	if(x>=y)
	for(i=y;i<=x;i++)
	{
		if(i==x)count++;
		if(x%i==0) f(x/i,i);
	}
}
main()
{
	int t;
	int n,i,x,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		count=0;
		scanf("%d",&x);
		f(x,2);
		printf("%d\n",count);
	}
}