
int main()
{
	int n;
	int i,j,k;
	int temp;
	int win=0;
	int tie=0;
	int lose=0;
	int tianji[1000];
	int qiwang[1000];
	while(1)
	{
		win=0;
		tie=0;
		lose=0;
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",tianji+i);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",qiwang+i);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(tianji[j]<tianji[j+1])
				{
					temp=tianji[j];
					tianji[j]=tianji[j+1];
					tianji[j+1]=temp;
				}
			}
			for(j=0;j<n-i-1;j++)
			{
				if(qiwang[j]<qiwang[j+1])
				{
					temp=qiwang[j];
					qiwang[j]=qiwang[j+1];
					qiwang[j+1]=temp;
				}
			}
		}
		for(j=0;j<n;j++)
		{
			if(qiwang[j]==-1)
			{
				continue;
			}		
			for(i=n-1;i>=0;i--)
			{
				if(tianji[i]==-1)
				{
					continue;
				}
				if(tianji[i]>qiwang[j])
				{
					tianji[i]=-1;
					qiwang[j]=-1;
					win++;
					break;				
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(tianji[i]==-1)
			{
				continue;
			}
			for(j=0;j<n;j++)
			{
				if(qiwang[j]==-1)
				{
					continue;
				}
				if(tianji[i]==qiwang[j])
				{
					tianji[i]==-1;
					qiwang[j]==-1;
					tie++;
					break;
				}
			}
		}
		lose=n-win-tie;
		printf("%d\n",(win-lose)*200);	
	}
	return 0;
}
