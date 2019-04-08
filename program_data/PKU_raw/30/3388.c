
void main()
{
	int n;
	int sum=0;
	scanf("%d", &n);
	if(n==0)
	{
		printf(0);
	}
	else
	{
		int i=0;
	    for(i=0; i<=n; i++)
		{
			if(i%7 != 0 && i%10 !=7 && i/10 !=7)
			{
				sum = sum + i*i;
			}
	      	 
		}
	}printf("%d\n", sum);
		
}
