void main()
{
	int a[300],n,*p=a,i,j,t;
	scanf("%d",&n);
	scanf("%d",&t);
	*p=t;
	j=1;
	printf("%d",t);
	for(i=2;i<=n;i++)
	{
		scanf("%d",&t);
		for(p=a;p<a+j;p++)
		{
			if(*p==t) goto z;
		}
		*p=t;
		j++;
		printf(",%d",t);
z:		;
	}
}