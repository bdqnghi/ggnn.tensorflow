main()
{
	int i=1,j,tot,rem,cur,rou,n[100],m[100],a[301];
	do 
	{
		scanf("%d %d",&n[i],&m[i]);
		i++;
	}
	while (n[i-1]!=0);
	tot=i-2;
	for (i=1;i<=tot;i++)
	{
		rem=n[i];
		cur=0;
		for (j=1;j<=n[i];j++)
			a[j]=1;
		while (rem>1)
		{
			rou=0;
			while (rou<m[i])
			{
				rou++;
				do
				{
					cur++;
					if (cur>n[i]) cur-=n[i];
				}
				while (a[cur]==0);
			}
			a[cur]=0;
			rem--;
		}
		for (j=1;j<=n[i];j++)
		if (a[j]==1) 
		{
			printf("%d\n",j);
			break;
		}
	}
	return 0;
}