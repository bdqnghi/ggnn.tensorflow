void main()
{
	int a[300],c[300];
	int n,i,k=0,m;
	float ave,total=0,cha;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		total=total+a[i];
	}
	ave=total/n;
	cha=fabs(a[0]-ave);
	c[0]=a[0];
	for(i=1;i<n;i++)
	{
		if(fabs(a[i]-ave)>cha)
		{
			cha=fabs(a[i]-ave);
			c[0]=a[i];
			m=a[i];
		}
	}
	for(i=1;i<n;i++)
	{
		if(fabs(fabs(a[i]-ave)-cha)<0.000001&&m!=a[i])
		{
			k++;
			c[k]=a[i];
		}
	}
	printf("%d",c[0]);
	for(i=1;i<=k;i++)
	{
		printf(",%d",c[k]);
	}


}