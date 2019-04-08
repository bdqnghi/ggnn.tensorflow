int main()
{
	int m,i,j,k,flag;
	scanf("%d",&m);
	for(i=3;i<=m/2;i+=2)
	{
		flag=0;
		for(k=3;k<=sqrt(i);k+=2)
		{
			if(i%k==0)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			for(j=3;j<=sqrt(m-i);j+=2)
			{
				if((m-i)%j==0)
				{
					flag=1;
				}
			}
			if(flag==0)
			{
				printf("%d %d\n",i,m-i);
			}
		}
	}
	return 0;
}