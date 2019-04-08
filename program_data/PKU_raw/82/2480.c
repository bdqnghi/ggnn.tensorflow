int main()
{
	int n,i,j,a[100][2],b[100]={0},k[100]={0},max=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d%d",&a[i][1],&a[i][2]);
	for(i=1;i<=n;i++)
	{
		if(a[i][1]<=140&&a[i][1]>=90&&a[i][2]<=90&&a[i][2]>=60)
			b[i]=1;
		else b[i]=0;
	}
	j=1;
	for(i=1;i<n;i++)
	{
		if(b[i]==1)
		{
			k[j]+=1;
			if(i==(n-1)&&b[n]==1)
				k[j]+=1;
		}
		if(b[i]==0)
			j++;
	}
	for(j=1;j<=100;j++)
	{
		if(k[j]>=max)
			max=k[j];
	}
	if(n==1)
		if(b[1]==1)
			printf("1");
		else printf("0");
	else
	printf("%d",max);
	return 0;
}