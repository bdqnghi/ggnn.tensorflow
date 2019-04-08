void main()
{
	int i,a[6];
	int t(a);
	for (i=0;i<6;i++)
	{
		scanf("%d",&a[i]); 
	}
	for (i=0;i<6;i++)
	{
		printf("%d\n",t(a[i]));
	}
}

t(a)
{
	int b[100],i,j,n,c=0;
	int q(n);
	for (i=0;a!=0;i++)
	{
		b[i]=a%10;
		a=a/10;
	}
    for(j=0;j<i;j++)
	{
		c=c+b[j]*q(i-1-j);
	}
	return (c);
}

q(n)
{
	int i,a=1;
	for (i=0;i<n;i++)
	{
		a=a*10;
	}
    return (a);
}








