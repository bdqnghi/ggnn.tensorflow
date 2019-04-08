void main()
{
	int n,i,j,k,a[300];
	float d=0,m=0,p=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);d=d+a[i];
	}
	d=(float)d;                    
	d=d/n;
	for(i=0;i<n;i++)
	{
		if(a[i]-d>=0)
		{if(a[i]-d>p)
		{p=a[i]-d;j=i;}}
		else
		{if(d-a[i]>m)
		{m=d-a[i];k=i;}
		}
	}
	if(p>m)
		printf("%d",a[j]);
	else if(p<m)
		printf("%d",a[k]);
		else printf("%d,%d",a[k],a[j]);
}