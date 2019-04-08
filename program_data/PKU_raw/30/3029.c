int main()
{
	int i,c,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7!=0)
		{
			c=(i%100)/10;
			if(i%10!=7)
			{
				if(c!=7)
				{
					sum=sum+i*i;
				}
			}
		}
	}
	printf("%d",sum);
	return 0;
}