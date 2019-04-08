void main()
{
	int n,i,j,k,r;
	scanf("%d",&n);
	while(n!=1)
	{
		r=n%2;
		if(r==0)
		{
			
			printf("%d/2=%d\n",n,n/2);
			n=n/2;
		}
		if(r!=0)
		{
			printf("%d*3+1=%d\n",n,n*3+1);
			n=n*3+1;
		}
	}
	printf("End");
}