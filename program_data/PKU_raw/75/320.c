void main()
{
	int m,n,i=0,j=0,s1[1000],s2[1000],t,max,min,max1,a[1000];
	char c;
	do
	{
		i=i+1;
		scanf("%d%c",&s1[i],&c);
	}
	while(c==',');
	m=i;
	do
	{
		j=j+1;
		scanf("%d%c",&s2[j],&c);
	}
	while(c==',');
	n=j;
	min=s1[i];
	for(i=1;i<=m;i++)
	{
		if(s1[i]<min)
			min=s1[i];
	}
	max=s2[i];
	for(j=1;j<=n;j++)
	{
		if(s2[j]>max)
			max=s2[j];
	}
	for(t=min;t<=max;t++)
	{
		a[t]=0;
		for(i=1;i<=m;i++)
		{
			if(t>=s1[i]&&t<s2[i])
				a[t]=a[t]+1;
		}
	}
	max1=a[min];
	for(t=min;t<=max;t++)
	{
		if(a[t]>max1)
			max1=a[t];
	}
	printf("%d %d",m,max1);
}




		
