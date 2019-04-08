void main()
{
	int a[100],b,c,d,e,f;
	scanf("%d%d",&b,&c);
	for(d=0;d<b;d++)
		scanf("%d",&a[d]);
	for(d=b-1;d>=b-c;d--)
		for(e=b-1;e>=1;e--)
		{
			f=a[e-1];
			a[e-1]=a[e];
			a[e]=f;
		}
		for(d=0;d<b-1;d++)
			printf("%d ",a[d]);
		printf("%d",a[b-1]);
}

