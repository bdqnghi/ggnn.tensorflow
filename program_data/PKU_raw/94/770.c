void main()
{
	int a[501],b[501];
	int n,i,j=0,m,temp;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	if(a[0]%2!=0)
	{
		b[j]=a[0];
		j=1;
	}
	for(i=1;i<n;i++)
	{
		scanf(" %d",&a[i]);
		if(a[i]%2!=0)
		{
			b[j]=a[i];
			j++;
		}
	}
	m=j;
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
		if(i!=0)
			printf(",");
		printf("%d",b[i]);
	}
}
