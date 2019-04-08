void main()
{
	int n,*p,i,j,b[100]={0};
	scanf("%d",&n);
	p=(int*)calloc(n,4);
	for(i=0;i<n-1;i++)
	{
		scanf("%d ",p+i);
	}
	scanf("%d",p+n-1);
	printf("%d",*p);
    for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(*(p+i)==*(p+j))
			{
				b[i]=1;
			}
		}
		if(b[i]==0)
		{
			printf(",%d",*(p+i));
		}
	}
}