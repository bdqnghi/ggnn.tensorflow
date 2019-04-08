main()
{
	int n,i,j,x,y,num,len;
	int c[500]={0},d[500]={0};
	char a[500],b[5];
	scanf("%d",&n);
	scanf("%s",a);
	len=strlen(a);
	for(x=0;x<len-n+1;x++)
	{
		num=0;
		for(i=0;i<n;i++)
		b[i]=a[x+i];
		for(i=x;i<len-n+1;i++)
		{
			for(j=0;j<n;j++)
			{
				if(b[j]!=a[i+j])
				break;
				}
			if(j==n)
			num=num+1;
			}
		c[x]=num;
		}
		
	for(i=0;i<len-n+1;i++)
	d[i]=c[i];
	for(i=0;i<len-n;i++)
	if(c[i]>=c[i+1])
	{
		y=c[i];c[i]=c[i+1];c[i+1]=y;
		}
		
	if(c[len-n]==1)
	printf("NO\n");
	else
	{
		printf("%d\n",c[len-n]);
		for(i=0;i<len-n+1;i++)
		if(d[i]==c[len-n])
		{
			for(j=0;j<n;j++)
			b[j]=a[i+j];
			for(j=0;j<n;j++)
			printf("%c",b[j]);
			printf("\n");
			}
		}
	}
