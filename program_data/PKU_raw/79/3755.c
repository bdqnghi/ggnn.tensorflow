void monkey(int n,int m)
{
	int s,i,j,a[301];
	for(i=1;i<=n;i++)
		a[i]=1;
	j=0;
	s=0;
	i=1;
	while(s<n-1)
	{
		if(a[i]==1)
		{
			j++;
			if(j==m)
			{
				a[i]=0;
				s++;
				j=0;
				if(s==n-1)
					break;
			}
		}
		if(i==n)
			i=0;
		i++;
	}
	for(i=1;i<=n;i++)
		if(a[i]==1)
		{
			printf("%d\n",i);
			break;
		}
}
void main()
{
	int i,k,m[200],n[200];
	for(i=0;i<200;i++)
	{
		scanf("%d%d",&n[i],&m[i]);
		if(m[i]==0 && n[i]==0)
		{
			k=i;
			break;
		}
	}
	for(i=0;i<k;i++)
		monkey(n[i],m[i]);
}