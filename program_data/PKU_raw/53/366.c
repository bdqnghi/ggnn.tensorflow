main()
{
	int a[300]={0},b[300]={0};
	int *p,*q;
	int n,i,j,m;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a;
	q=b;
	for(i=0;i<n;i++)
	{
		if (*(q+i))
			continue;
		m=0;
		for (j=0;j<n;j++)
		{
			if (*(q+j))
				continue;
			if (*(p+i)==*(p+j))
			{
				m++;
			    if (m>1)
				    *(q+j)=1;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		if (*(q+i))
			continue;
		if (i)
			printf(",");
		printf("%d",*(p+i));
	}
	printf("\n");
}