void main()
{
	int a[100000];
	int n,i,j=0,k;
	int *p;
	scanf("%d",&n);
	for(i=0,p=&a[0];i<n;i++)scanf("%d",&*(p+i));
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=k)
		{
			*(p+j)=*(p+i);
			j++;
		}
	}
	for(i=0;i<j-1;i++)printf("%d ",*(p+i));
	printf("%d\n",*(p+i));
}