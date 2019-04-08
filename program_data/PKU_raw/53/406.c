void main()
{
	int n,i,j,k=0,a[300],b[300]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	i=1;
	for(j=1;j<n;j++)
	{
		for(k=0;k<i;k++)
		{
			if(a[j]==b[k]) break;
		}
		if(k<i) continue;
		else 
		{
			b[i]=a[j];
		    i++;
		}
	}
	for(j=0;j<i-1;j++)
	{
		printf("%d,",b[j]);
	}
	printf("%d",b[j]);
}