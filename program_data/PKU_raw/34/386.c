void main()
{
	int digui(int n);
	int n,k;
	scanf("%d",&n);
	k=digui(n);
	printf("End\n");
}
int digui(int n)
{
	if(n==1) return 0;
	else if(n%2==1)
	{
		printf("%d*3+1=%d\n",n,n*3+1);
	    return	digui(n*3+1);
	}
	else if(n%2==0)
	{
		printf("%d/2=%d\n",n,n/2);
		return digui(n/2);
	}
}
