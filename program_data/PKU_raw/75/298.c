int main()
{
	int a[1001],b[1001],i,j,min=10000,max=0,len,d[1000]={0},t=0;
	char c[1000];
	for(i=1;i<=1000;i++)
	{
		scanf("%d%c",&a[i],&c[i]);
		if(c[i]=='\n')
			break;
	}
	for(i=1;i<=1000;i++)
	{
		scanf("%d%c",&b[i],&c[i]);
		if(c[i]=='\n')
			break;
	}
	len=i;
	printf("%d ",len);
	for(i=1;i<=len;i++)
	{
		if(a[i]<=min)
			min=a[i];
		if(b[i]>=max)
			max=b[i];
	}
	for(i=min;i<=max;i++)
		for(j=1;j<=len;j++)
			if(i>=a[j]&&i<b[j])
				d[i]++;
	for(i=min;i<=max;i++)
		if(d[i]>=t)
			t=d[i];
	printf("%d",t);
	return 0;
}