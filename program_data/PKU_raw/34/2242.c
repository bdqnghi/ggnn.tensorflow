int main()
{
	int n,i,j,k,a,b;
	scanf("%d",&n);
	while(n!=1)
	{
		if(n%2==1)
		{
			k=n;
			n=3*n+1;
			printf("%d*3+1=%d\n",k,n);
		}
		else
		{
			k=n;
			n/=2;
			printf("%d/2=%d\n",k,n);
		}
	}
	printf("End\n");
}