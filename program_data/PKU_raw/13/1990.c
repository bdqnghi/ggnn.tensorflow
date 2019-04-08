void main()
{
	int n,*p;
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int)*n);
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("%d",*p);
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;)
		{
			if(*(p+i)==*(p+j))
				break;
			else
				j++;
		}
		if(j==i)
			printf(" %d",*(p+i));
	}
}
