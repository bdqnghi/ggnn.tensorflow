int main()
{
	int i,j,n=0,a[16],shu,sum=0;
	while (1)
	{
		scanf("%d",&shu);
		if (shu==-1)
			return 0;
		else if (shu==0)
		{
			for (i=1;i<=n;i++)
			{
				if (a[i]&&a[i]%2==0)
				{
					for (j=1;j<=n;j++)
						if (a[j]==a[i]/2)
							sum++;
				}
			}
			printf("%d\n",sum);
			sum=0;
			n=0;
		}
		else
		{
			n++;
			a[n]=shu;
		}
	}
	return 0;
}