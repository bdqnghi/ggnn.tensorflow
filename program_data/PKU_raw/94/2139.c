int main()
{
	int N,n=0,num[500],i,j,number;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&number);
		if(number%2!=0)
		{
			n=n+1;
			num[n-1]=number;
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(num[j]>num[j+1])
			{
				number=num[j+1];
				num[j+1]=num[j];
				num[j]=number;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",num[i]);
		if(i<n-1)
		{
			printf(",");
		}
	}
	printf("\n");
	return 0;
}

		
