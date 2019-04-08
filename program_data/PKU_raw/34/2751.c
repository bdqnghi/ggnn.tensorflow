void main()
{
	int n,i,x;scanf("%d",&n);
	if(n!=1)
	for(i=0;;i++)
	{
		if(n%2==1)
		{
			x=n*3+1;
			printf("%d*3+1=%d\n",n,x);if(x==1)break;
			n=x;
		}
		else
		{
			x=n/2;
			printf("%d/2=%d\n",n,x);if(x==1)break;
			n=x;
		}
	}
	printf("End");
}
