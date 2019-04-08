void main()
{
	int n,i,j,k,m=0,sum=59;
	int a[100],b[100];
	char c[101][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",c[i],&a[i]);
		if(a[i]>=60) m++;
	}
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>sum)
			{
				sum=a[i];
				k=i;
			}
			else continue;
		}
		a[k]=-1;
		b[j]=k;
		sum=59;
	}
	for(i=0;i<m;i++)
		printf("%s\n",c[b[i]]);
	for(i=0;i<n;i++)
	{
		if(a[i]>=0&&a[i]<60)
			printf("%s\n",c[i]);
	}
}