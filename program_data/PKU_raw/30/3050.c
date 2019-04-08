int main()
{
	int i,n;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
		{
			continue;
		}
		else
		{
			if((int)i/10==7)
			{
				continue;
			}
			else
			{
				if(i%10==7)
				{
					continue;
				}
				else
				{
					sum=sum+i*i;
				}
			}
		}
	}
	printf("%d",sum);
	return 0;
}

