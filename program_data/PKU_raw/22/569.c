void main()
{
	char c[300];
	gets(c);
	int a[300],n=0,i=0,k=0;
	for(i=0;i<300;i++)
		a[i]=0;
	i=0;
	while(c[i]!=0)
	{
		if(c[i]!=',')
			a[n]=a[n]*10+c[i]-'0';
		else
			n++;
		i++;
	}
//	puts(c);
/*	for(i=0;i<=n;i++)
		printf("%d,",a[i]);*/
		for(i=0;i<=n;i++)
			if(a[i]>k)
			{
				k=a[i];
			}
		for(i=0;i<=n;i++)
			if(a[i]==k)
				a[i]=0;
		k=0;
		for(i=0;i<=n;i++)
			if(a[i]!=0)
				break;
		if(i>n)printf("No");
		else
		{
		for(i=0;i<=n;i++)
		{
			if(a[i]>k)
				k=a[i];
		}
		printf("%d",k);
		}
}