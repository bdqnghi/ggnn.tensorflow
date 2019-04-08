void main()
{
	int n,i,j,a[300],*p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=&a[0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			if(*(p+i)==*(p+j)) *(p+i)=0;
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		if(*(p+i)!=0) printf(",%d",*(p+i));
	}
}