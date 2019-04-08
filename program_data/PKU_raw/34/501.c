int main()
{
	int n,a,b;
	scanf("%d",&n);
	a=n;
	while(a!=1)
	{
		if(a%2!=0)
		{
			b=a*3+1;
			printf("%d*3+1=%d\n",a,b);
			a=b;
		}
		if(a%2==0)
		{
			b=a/2;
			printf("%d/2=%d\n",a,b);
			a=b;
		}
	}
	printf("End");
	return 0;
}
