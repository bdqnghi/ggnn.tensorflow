
main()
{
	int a[100000],k,i,j,n,m=0,*p=a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
    for(i=n-1;i>=0;i--)
		if(*(p+i)==k)
		{
			for(j=i;j<n-1;j++)
				*(p+j)=*(p+j+1);
			m+=1;
		}
	for(i=0;i<n-m-1;i++)
		printf("%d ",*(p+i));
	printf("%d\n",*(p+i));
}