int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;n!=1;i++)
	{
		if(n%2==1)
		{
			printf("%d",n);
			n=3*n+1;
			printf("*3+1=%d\n",n);
		}
		else
		{
			printf("%d",n);
			n=n/2;
			printf("/2=%d\n",n);
		}
	}
	printf("End");
	return 0;
}
