void main()
{
	int n,a[300],m=1,i,j,x;
	scanf("%d",&n);
	scanf("%d",a);
	for (i=1;i<n;i++)
	{
		scanf("%d",&x);
		for (j=0;j<m;j++)
			if (*(a+j)==x) break;
		if (j==m)
		{
			*(a+m)=x;
			m++;
		}
	}
	printf("%d",*a);
	for (i=1;i<m;i++)
		printf(",%d",*(a+i));
}



