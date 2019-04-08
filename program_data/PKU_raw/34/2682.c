void main()
{
	int i,j,k,n;scanf("%d",&n);
	for(;n!=1;)
	{
		if(n%2==0)
		{printf("%d/2=%d\n",n,n/2);n=n/2;}
		else
		{
			printf("%d*3+1=%d\n",n,n*3+1);
			n=n*3+1;
		}
	}
	printf("End");
}