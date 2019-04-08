int main()
{
	int n;
	int t=0;
	scanf("%d",&n);
	while(n!=1)
	{
		if (n%2==1)
		{
			t++;
			int e=n;
			n=3*n+1;
			if (t==1)
			{
				printf("%d*3+1=%d",e,n);
			}
			else if (t>1)
			{
				printf("\n%d*3+1=%d",e,n);
			}
			
		}
		else
		{
			t++;
			int e=n;
			n=n/2;
			if (t==1)
			{
				printf("%d/2=%d",e,n);
			}
			else if (t>1)
			{
				printf("\n%d/2=%d",e,n);
			}
		}
	}
	printf("\nEnd");
	
	
	return 0;

}



