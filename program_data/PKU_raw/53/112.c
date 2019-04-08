void main()
{ 
	int j,c[500],i,d=1,n,a[500];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	printf("%d",a[0]);
	while(d<n)
	{c[d]=0;
		for(j=0;j<d;j++)
	{
		if(a[d]==a[j])
		{c[d]=1;break;}}
		d++;
	}
	for(i=1;i<n;i++)
	{if(c[i]==0)
	printf(",%d",a[i]);
	}
	}