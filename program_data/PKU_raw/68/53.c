int main()
{
	int n,j,i,k,q,f;
	scanf("%d",&n);
	for (k=6;k<=n;k+=2)
	{
		for (j=3;j<=k;j+=2)
		{
			q=0;
			for (i=2;i<=sqrt(j);i++)
			{
				if (j%i==0)
				{
					q=1;
					break;
				}
			}
			if (q==0)
			{
				f=k-j;
				for (i=2;i<=sqrt(f);i++)
				{
					if (f%i==0)
					{
						q=1;
						break;
					}
				}
			}
			if (q==0)
			{
				printf("%d=%d+%d\n",k,j,f);
				break;
			}

		}
	}
	return 0;
}