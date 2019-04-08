void main()
{
	int a[300],n,i,j=0,k,m,c[300]={0};
	float p,d=0.0,b[300]={0},t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		d=d+(float)a[i];
	}
	p=d/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>=p)
		b[i]=a[i]-p;
		else b[i]=p-a[i];
	}
	for(i=0;i<n;i++)
	{
		if(b[i]>=t)t=b[i];
	}
	for(i=0;i<n;i++)
	{
		if(t==b[i])
		{
				c[j]=i;
				j=j+1;
		}
	}
	for(i=0;i<j-1;i++)
		for(k=0;k<j-i-1;k++)
			if(a[c[k]]>a[c[k+1]])
			{
				m=a[c[k]];
				a[c[k]]=a[c[k+1]];
				a[c[k+1]]=m;
			}
	for(i=0;i<j;i++)
	{
		if(i==0)printf("%d",a[c[i]]);
		else printf(",%d",a[c[i]]);
	}
}