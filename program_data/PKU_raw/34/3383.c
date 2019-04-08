void main()
{
	int k;
	scanf("%d",&k);
	while(k!=1)
	{
		printf("%d",k);
		if(k%2==1)
		{
			k=k*3+1;
			printf("*3+1=%d\n",k);
		}
		else
		{
			k=k/2;
			printf("/2=%d\n",k);
		}
	}
	printf("End");
}