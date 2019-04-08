int one(int n)
{
	if(n!=1)
	{
		if(n%2!=0)
		{
			printf("%d*3+1=%d\n",n,(n*3+1));
			n=n*3+1;
		}
		else
		{
			printf("%d/2=%d\n",n,(n/2));
			n=n/2;
		}
	}
	else
	{
		n=-1;
		printf("End");
	}
	return n;
}
int main()
{
	int n;
	scanf("%d",&n);
	do
	{
		n=one(n);
	}
	while(n!=-1);
	return 0;
}