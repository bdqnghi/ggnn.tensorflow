void main()
{
	int a[100000],i,j,*p,*q,n,k;
	scanf("%d",&n);
	for(p=a,i=0;p<a+n;p++)
		scanf("%d",&*(p+i));
	printf("\n");
	scanf("%d",&k);
	for(p=a,q=a;p<a+n;p++)
	{
		if(*p!=k)
		{
			*q=*p;
			q++;
		}
	}
	for(p=a;p<(q-1);p++)
		printf("%d ",*p);
	printf("%d",*(q-1));
	printf("\n");
}
