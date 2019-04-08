


void main()
{
	int i,n;
	scanf("%d",&n);
	while(1)
	{
		if(n==1)
		{
			printf("End\n");
			break;
		}
		else
		{
			if(n%2==0)
			{
				printf("%d/2=%d\n",n,n/2);
				n=n/2;
			}
			else
			{
				printf("%d*3+1=%d\n",n,n*3+1);
				n=n*3+1;
			}
		}
	}
}
