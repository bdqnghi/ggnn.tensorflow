void main()
{
	int a[300]={0};
	int c,n,max,min,sum;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	max=a[0];
	min=a[0];
	sum=a[0];
	if(n>1)
	{
		for(c=1;c<n;c++)
			scanf("%d",&a[c]);
		for(c=1;c<n;c++)
		{
			sum=sum+a[c];
			if(max<a[c])
				max=a[c];
			if(min>a[c])
				min=a[c];
		}
		if(max*n-sum>sum-min*n)
			printf("%d\n",max);
		else
		{
			if(max*n-sum<sum-min*n)
				printf("%d\n",min);
			else
				printf("%d,%d\n",min,max);
		}
	}
	else
		NULL;
}