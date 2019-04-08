int main()
{
	while(1)
	{
		int i,n;
		scanf("%d",&n);
		if(n==0)
			break;
		int t[1000]={0},q[1000]={0};
		for(i=0;i<n;i++)
			scanf("%d",&t[i]);
		for(i=0;i<n;i++)
			scanf("%d",&q[i]);
		for(i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(t[j]>t[i])
				{
					int temp=t[j];
					t[j]=t[i];
					t[i]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(q[j]>q[i])
				{
					int temp=q[j];
					q[j]=q[i];
					q[i]=temp;
				}
			}
		}
		int i1=n-1,i2=n-1,j1=0,j2=0;
		int win=0,lose=0;
		while(i1>=j1&&i2>=j2)
		{
			if(t[i1]>q[i2])
			{
				win++;
				i1--;i2--;
				continue;
			}
			if(t[i1]<q[i2])
			{
				lose++;
				i1--;j2++;
				continue;
			}
			if(t[i1]==q[i2])
			{
				if(t[j1]>q[j2])
				{
					win++;
					j1++;j2++;
					continue;
				}
				if(t[i1]<q[j2])
				{
					lose++;
					i1--;j2++;
					continue;
				}
				else
				{
					break;
				}
			}
		}
		printf("%d\n",(win-lose)*200);
	}
}