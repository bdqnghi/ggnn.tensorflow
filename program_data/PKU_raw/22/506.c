int main()
{
	int i,a[300],amount=0;
	char c[300];
	for(i=0;;i++)
	{
		scanf("%d%c",&a[i],&c[i]);
		amount=amount+1;
		if(c[i]=='\n')
			break;
	}
	
	////
	int sum=0;
	if(amount==1)
	{
		printf("No");
	}
	else if(amount!=1)
	{
		for (i=0;i+1<amount;i++)
		{
			if(a[i+1]!=a[i])
				sum=sum+1;
		}
		if(sum==0)
		{
			printf("No");
		}
		else 
		{//??????
			int sum=0;
			int j,cache;
			a[amount]=10000000;
			for(j=0;j<amount;j++)
			{
				for(i=0;i<amount;i++)
				{
					if(a[i]>a[i+1])
					{
						cache=a[i+1];
						a[i+1]=a[i];
						a[i]=cache;
					}
				}
			}
			///?????
			for(j=amount-1;j>0;j--)
			{
				if(a[j]==a[j-1])
					continue;
				else
				{
					printf("%d",a[j-1]);
					break;
				}

			}
		}
	}
	return 0;
}
