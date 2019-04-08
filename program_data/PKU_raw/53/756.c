void main()
{
	int a[300],b[300];
	int *p,i,j,n,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=b;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j]) break;
		}
		if(j==i)
		{
			*p++=a[i];
			k++;
		}
		else continue;
	}
	p=b;
	for(i=0;i<k-1;i++)
		printf("%d,",*p++);
	printf("%d",*p);
}
