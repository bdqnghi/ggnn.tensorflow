void main()
{
	int n,a[300],i,j,k;
	int *p;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n-1;i++)
		scanf("%d ",p+i);
	scanf("%d",p+n-1);
	printf("%d",*p);
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
			if(*(p+i)!=*(p+j))
				k=0;
			else
			{
				k=1;break;
			}
		if(k==0)
			printf(",%d",*(p+i));
	}
    printf("\n");
}
