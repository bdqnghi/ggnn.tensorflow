void main()
{
	int a[333],*p,n,i,j,k=0;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		scanf("%d",p++);
	p=a;
	printf("%d",*p);
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
			if(*(p+i)==*(p+j)) k++;
		if(k==0) printf(",%d",*(p+i));
		k=0;
	}
}