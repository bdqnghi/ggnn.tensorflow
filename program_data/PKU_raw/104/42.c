void main()
{
	int a[11],b[11],i,j;
	scanf("%d %d",&a[0],&b[0]);
	for(i=1;i<11;i++)
	{
		a[i]=(int)(a[i-1]/2);
	}
	for(j=1;j<11;j++)
	{
		b[j]=(int)(b[j-1]/2);
	}
	for(i=0;i<11;i++)
	{
		for(j=0;j<11;j++)
		{
			if(a[i]==b[j])
			{printf("%d\n",a[i]);i=11;j=11;}
		
		}
	}
}