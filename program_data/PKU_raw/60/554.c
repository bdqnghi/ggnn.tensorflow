int main()
{
	int isit(int);
	int n;
	int empt=1;
	scanf("%d",&n);
	int i;
	for(i=2;i<=n-2;i++)
	{
		if (isit(i)&&isit(i+2))
		{
			empt=0;
			printf("%d %d\n",i,i+2);
		}
	}
	if(empt)
		printf("empty");
	return 0;
}
int isit(int num)
{
	int i;
	for(i=2;i*i<=num;i++)
	{
		if(num%i==0)
		{return 0;
		goto end;}
	}
	return 1;
end:;
}