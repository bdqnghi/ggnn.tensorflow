void main()
{
	char c[5000];
	gets(c);
	int x[5000],y[5000],n=0,i=0,j=0,a[5000];
	for(i=0;i<5000;i++)
	{
		x[i]=0;
		y[i]=0;
		a[i]=0;
	}
	i=0;
	while(c[i]!=0)
	{
		if(c[i]!=',')
			x[n]=x[n]*10+c[i]-'0';
		else
			n++;
		i++;
	}
	gets(c);n=0;i=0;
	while(c[i]!=0)
	{
		if(c[i]!=',')
			y[n]=y[n]*10+c[i]-'0';
		else
			n++;
		i++;
	}
/*	printf("%d\n",n);
	for(i=0;i<=n;i++)
		printf("%d,%d ",x[i],y[i]);	*/						//????,n+1????
	for(i=0;i<1000;i++)
		for(j=0;j<=n;j++)
		{
			if(x[j]<=i&&y[j]>i)
					a[i]++;
		}
	int m=0;
	for(i=0;i<=1000;i++)
		if(a[i]>m)
			m=a[i];
	printf("%d %d",n+1,m);
//	for(i=0;i<=1000;i++)
//		printf(" %d  ",a[i]);
}
/*	puts(c);
	for(i=0;i<=n;i++)
		printf("%d,",a[i]);
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
*/