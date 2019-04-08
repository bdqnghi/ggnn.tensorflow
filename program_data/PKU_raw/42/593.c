void main()
{
	int i,n,j,k,a[100000],*p;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		scanf("%d",p++);
	scanf("%d",&k);
	p=a;
    for(i=0;i<n;i++)
	{
			if(*(p+i)==k)
			{
				n--;
				for(j=i;j<n;j++)
	             *(p+j)=*(p+j+1);
				i--;
			}
	}
    for(i=0;i<n-1;i++)
            printf("%d ",*p++);
    p=a;
	printf("%d",*(p+n-1));
}