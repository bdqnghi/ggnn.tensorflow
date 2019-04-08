
int main()
{
	int k;
	int d[25];
	int f[25];
	int max=0;

	scanf("%d",&k);

	for(int i=0;i<k;i++)
	{
		scanf("%d",&d[i]);
		f[i]=1;
	}

	while(1)
	{
		int tmp=0;
		int x=0;
		int y=0;

		int ci;
		for(ci=0;ci<k;ci++)
		{
			if(f[ci]==1)
			{
				y++;
				if(x==0)
				{
					tmp=d[ci];
					x++;
				}
				else
				{
					if(d[ci]<=tmp)
					{
						tmp=d[ci];
						x++;
					}
					else
						break;
				}
			}
		}

		if(x==y)
			if(x>max)
				max=x;

		int cnt;
		for(cnt=0;cnt<k;cnt++)
		{
			if(f[cnt]!=0) break;
		}
		if(cnt==k) break;

		f[k-1]--;
		for(int i=k-1;i>0;i--)
		{
			if(f[i]==-1)
			{
				f[i]=1;
				f[i-1]--;
			}
		}

	}

	printf("%d",max);

		return 0;
}